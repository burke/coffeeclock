This is an espresso alarm clock. It brews espresso at the end of a 20-minute nap (or whatever else -- that part of it is written in ruby, and very simple to change).

I made some minor modifications (`saeco-via-venezia-schematic.pdf`) to a Saeco Via Venezia espresso machine ($229 CAD at Starbucks) to interface with an Arduino. the Arduino communicates with a computer via USB/Serial (`coffee_sketch.pde`). That computer runs a program called [serproxy](http://www.lspace.nildram.co.uk/freeware.html), which exposes the serial connection via a TCP port. My macbook connects to this TCP port over the local network to issue commands and do other alarm-y things when the timer expires (`coffee`). 

Photos and more diagrams coming soon.
