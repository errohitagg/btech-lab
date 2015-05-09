---------------------------------------------------------------------------------------------------
--
-- Title       : and_gate
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : and_gate.vhd
-- Generated   : Mon Apr  5 20:54:24 2010
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
--{entity {and_gate} architecture {and_gate}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity and_gate is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 c : out STD_LOGIC
	     );
end and_gate;

--}} End of automatically maintained section

architecture and_gate of and_gate is
begin

	-- enter your statements here --	 
	
	c <= a and b;

end and_gate;
