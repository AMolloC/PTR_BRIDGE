#include <iostream>
#include "AdvanceRemoteControl.cpp"
#include "Device.cpp"
#include "Radio.cpp"
#include "RemoteControl.cpp"
#include "TV.cpp"
#include "TVbox.cpp"


using namespace std;
int main() {


    TV = new TV()
        remote = new RemoteControl(tv)
        remote.togglePower()

        radio = new Radio()
        remote = new AdvancedRemoteControl(radio)
}