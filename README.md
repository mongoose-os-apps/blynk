# Using Blynk with Mongoose OS

## Overview

This example shows how to use MongooseOS with Blynk mobile framework.
Go to device configuration and specify
`blynk.auth` setting to your Blynk access token. Or, alternatively,
run the following console command (from the terminal or "Terminal" tab in Web UI):

```bash
mos config-set blynk.auth=YOUR_TOKEN
```

In the Blynk phone app, add a graph that reads a virtual pin 1,
and a toggle button that writes to a virtual pin 2. Toggling a button will
turn a built-in NodeMCU LED on/off, and a graph will show free RAM.

You can easily add your own handlers for Blynk virtual pins, in either C
or JavaScript.

## How to install this app

- Install and start [mos tool](https://mongoose-os.com/software.html)
- Switch to the Project page, find and import this app, build and flash it:

<p align="center">
  <img src="https://mongoose-os.com/images/app1.gif" width="75%">
</p>
