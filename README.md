# MongooseOS and Blynk example

This example shows how to use MongooseOS with Blynk mobile framework.
Import this app, go to device configuration and specify
`blynk.auth` setting to your Blynk access token. Or, alternatively,
run the following console command:

```bash
mos config-set blynk.auth=YOUR_TOKEN
```

In the Blynk phone app, add a graph that reads a virtual pin 1,
and a toggle button that writes to a virtual pin 2. Toggling a button will
turn a built-in NodeMCU LED on/off, and a graph will show free RAM.

You can easily add your own handlers for Blynk virtual pins, in either C
or JavaScript.
