#include <memory>

#include "Duck.h"
#include "Ducks/MallardDuck.h"
#include "Ducks/MallardDuck.cpp"

#include "Ducks/ModelDuck.h"
#include "Ducks/ModelDuck.cpp"

#include "FlyBehaviors/FlyRocketPowered.cpp"

int main() {

    using DuckPtr = std::unique_ptr<Duck>;

    DuckPtr mallard = std::make_unique<MallardDuck>();
    mallard->PerformQuack();
    mallard->PerformFly();

    printf(">>> Dynamically changing stuff on the model duck\n");

    DuckPtr model = std::make_unique<ModelDuck>();
    model->PerformFly();
    // this here is interesting, should be investigated more
    model->SetFlyBehavior(std::make_unique<FlyRocketPowered>());
    model->PerformFly();

    printf(">>> The following methods come from the Duck class\n");

    model->Swim();
    mallard->Swim();

    return 0;
}