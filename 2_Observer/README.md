# 2. Don't miss out when something interesting happens

The set of Publisher (**Subject**) and subscriber (**Observers**) and how they interact with each other is the key to understanding the **Observer Pattern**.

The subject object manages some data; new data are communicated only to the objects that are subscribed (the observers). An observer object must be subscribed to the subject to recieve updates.

## A brief high level overview

An high level overview about this pattern can be shown with each step of the two interested objects (Subject and Observer (or, equivalently, a Subscriber))

1. An X object tells the Subject object that it wants to become an observer;
2. the X object becomes an observer of the Subject Object;
3. the Subject object gets a new value and notifies all its subscirbers;
4. the Y object is not interested on the Subject object anymore and wants to unsibscribe;
5. the Subject object acknoledges that Y is not in its set of observers;
6. the Subject has a new value and notifies X and all the other subscribers but not Y, which is not an observer for that value anymore.

## Definition

> The **Observer Pattern** defines a *one-to-many* dependency between objects so that, when one object changes state, all of its dependents are notified and update automatically.

### An important consideration

Since the Subject object is the sole owner of the data, the observer are only dependent on that data, without the ability to control it. This means a cleaner OO design, since the control is only in the hands of the Subject, or equvalently, the Subscriber cannot change the data.

## The power of loose coupling

When two objects are loosely coupled, they are able to interact but have very little knowledge of each other. The Observer pattern provides an object design where *Subjects* and *Observers* are **loosely coupled**.

> **Design Principle**: Strive for *loosely coupled* designs between objects that interacts.

Loosely coupled designs allow to build flexile OO systems that can handle change because they minimize the interdependency between objects.

## Push vs Pull model

The Push Model implements the idea that it's the WeatherData object that pushes the **all** the data when it changes to all the subscribers. If a new type of data becomes available at a certain point by the weather station (like the UV Index or the wind speed), every class that implements the Update function needs to be changed (since the values to get are 4 instead of 3).

The Pull Model allows each Observer to request to the Subject only the data it needs:: when there are new values available, the WeatherData objects notifies the Observer about that and the Observer, in return, ask only the data they need for their computations.

This is more flexible: when a new datum is available (like the wind speed we already cited), only the Observers that needs that new data need to be changed. The other ones can remain the same. This problem comes from the fact that the interface has a predifined `Update()` function that limit the values that can be used.

