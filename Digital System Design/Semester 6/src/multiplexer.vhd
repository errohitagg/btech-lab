---------------------------------------------------------------------------------------------------
--
-- Title       : multiplexer
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : multiplexer.vhd
-- Generated   : Mon Apr  5 21:10:19 2010
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
--{entity {multiplexer} architecture {multiplexer}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity multiplexer is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 c : in STD_LOGIC;
		 d : in STD_LOGIC;
		 x : in STD_LOGIC;
		 y : in STD_LOGIC;
		 z : out STD_LOGIC
	     );
end multiplexer;

--}} End of automatically maintained section

architecture multiplexer of multiplexer is
begin

	-- enter your statements here --			
	
	z <= ((not y) and (not x) and a) or ((not y) and x and b) or (y and (not x) and c) or (y and x and d);

end multiplexer;
