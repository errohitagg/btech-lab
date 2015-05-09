---------------------------------------------------------------------------------------------------
--
-- Title       : nor_gate
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : nor_gate.vhd
-- Generated   : Mon Apr  5 21:02:01 2010
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
--{entity {nor_gate} architecture {nor_gate}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity nor_gate is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 c : out STD_LOGIC
	     );
end nor_gate;

--}} End of automatically maintained section

architecture nor_gate of nor_gate is
begin

	-- enter your statements here --	 
	
	c <= a nor b;

end nor_gate;
