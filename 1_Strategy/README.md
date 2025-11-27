# Someone already solved your problems

## What can I do to learn

- The more you understand, the less you need to remember;
- do the exercises, write notes (already doing it, yay);
- _there are no dumb questions_;
- last challenging thing before bed;
- drink water (duh);
- talk about it;
- stop when you feel like you're start forgetting;
- design something.

## READ ME

Activities are **NOT** optional
In this book: _composed_ means two objects are in a **HAS-A** relationship.
Redundancy is intentional and important.

## Intro to Design Patterns

**Design Principle**: identify the aspects of the application that vary (from every new requirement) and separate them from what stays the same.
**IOW**: Take what varies and incapsulate it so you can alter or extend the parts that vary without affecting those that don't; the results is fewer unintended consequences from code changes and more flexibility in the system.

**All design patterns provide a way to let _some part of the system vary indipendently of all the other parts_.**

**Design Principle**: Program to an interface, not an implementation, where it really means **program to a supertype**.

A supertype means that, regardless of the specific implementation of the the class that inherits, we can use the same methods. In this way, we can assign the concrete implementation object at runtime while not changing a line of code (since we are using the /</<interface methods/>/>, which are the same regardless of the implementation.

Note: usually, in OO programming, a class usually have state (instance variables) and behavior. In this case, we have a class that implements a _behavior_, which is not a _thing_ per se; however, our _behavior_ class might still have state and behavior, which means is effectively a class.

The key of this is that the father class will **delegate** the behaviors, instead of using the methods defined in the subclass (son class).

## DO TRY THIS AT HOME

The implementation has some interesting stuff to note about.

This is how the suggested implementation of `SetFlyBehavior` is done:

```c++
void SetFlyBehavior(std::unique_ptr<FlyBehavior> newFlyBehavior)
{ 
    flyBehavior = std::move(newFlyBehavior);
}
```

which uses move semantics. **Study why this works in depth**

Another interesting thing is how the change in behavior is called. The set is done with:

```c++
model->SetFlyBehavior(std::make_unique<FlyRocketPowered>());
// OR, equivalently:
model->SetFlyBehavior(std::unique_ptr<FlyRocketPowered>(std::make_unique<FlyRocketPowered>()));
// which defines the ptr before assigning it.
```

## Encapsulated behaviors

The main change between the original structure and the one in this repo is that _composition_ is now used instead of _inheritance_.
**Design Principle**: Favor composition over inheritance.

Systems that use composition are a lot more flexible: it allows for _encapsulation_ of family of algorithms into their own set of classes but also allows for changes in the behavior at runtime.

## Definition of the pattern

The **Strategy Pattern** defines a family of algorithms, encapsulates each one, and makes them interchangable. Strategy lets the algorithm vary indipendently from clients using it.

## On a side note

Design patterns are a shared vocabulary with other developers: less words, more abstract concepts.
They also allow to think at the pattern level, instead of the object level (which is still important but might be not enough, as it was for the Duck program at the beginning).

One of the secrets of creating maintanable code is thinking about how they might change in the future; the OO-principles (such as encapsulation, inheritance, ...) address the issue of not finding a pattern that matches the problem.
