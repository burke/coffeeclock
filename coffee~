#!/usr/bin/env ruby
# -*- ruby -*-

require 'socket' 

SERIAL_PORT = 5333
NAP_TIME    = 20*60

class EspressoMachine

  START_BREW_COFFEE = "a"
  STOP_BREW_COFFEE  = "b"
  
  def initialize(host,port)
    @host = host
    @port = port
  end

  def brew_for(n)
    tcpdo(START_BREW_COFFEE)
    sleep(n)
    tcpdo(STOP_BREW_COFFEE)
  end

  private
  def tcpdo(comm)
    socket = TCPSocket.new(@host, @port)
    puts "#{socket.inspect} => #{comm}"
    socket.send(comm, 0)
    socket.close
  end
  
end

if __FILE__ == $0

  espresso = EspressoMachine.new('192.168.1.64',SERIAL_PORT)
  
  case ARGV.shift 
  when "brew"
    espresso.brew_for(18)
  else #nap
    time = (ARGV.shift || NAP_TIME).to_i
    puts "napping for #{time}s"
    sleep(time)
    `osascript -e 'tell Application "iTunes" to play playlist "Wake Up"'`
    espresso.brew_for(18)
  end
  
end
