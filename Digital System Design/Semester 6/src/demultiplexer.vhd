---------------------------------------------------------------------------------------------------
--
-- Title       : demultiplexer
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : demultiplexer.vhd
-- Generated   : Mon Apr  5 21:17:57 2010
-- From        : interface description file
-- By          : Itf2Vhdl ver. 1.20
--
---------------------------------------------------------------------------------------------------
--
-- Description : 
--
---------------------------------------------------------------------------------------------------

--{{ Section below this comment is automatically maintained
--   and may be overwritten
--{entity {demultiplexer} architecture {demultiplexer}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity demultiplexer is
	 port(
		 x : in STD_LOGIC;
		 y : in STD_LOGIC;
		 z : in STD_LOGIC;
		 a : out STD_LOGIC;
		 b : out STD_LOGIC;
		 c : out STD_LOGIC;
		 d : out STD_LOGIC
	     );
end demultiplexer;

--}} End of automatically maintained section

architecture demultiplexer of demultiplexer is
begin

	-- enter your statements here --		
	
	a <= ((not y) and (not x) and z);
	b <= ((not y) and x and z);
	c <= (y and (not x) and z);
	d <= (y and x and z);
	

end demultiplexer;
