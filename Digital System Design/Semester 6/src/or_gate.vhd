---------------------------------------------------------------------------------------------------
--
-- Title       : or_gate
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : or_gate.vhd
-- Generated   : Mon Apr  5 20:57:45 2010
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
--{entity {or_gate} architecture {or_gate}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity or_gate is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 c : out STD_LOGIC
	     );
end or_gate;

--}} End of automatically maintained section

architecture or_gate of or_gate is
begin

	-- enter your statements here --
	
	c <= a or b;

end or_gate;
