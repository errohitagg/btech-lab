---------------------------------------------------------------------------------------------------
--
-- Title       : not_gate
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : not_gate.vhd
-- Generated   : Mon Apr  5 20:59:22 2010
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
--{entity {not_gate} architecture {not_gate}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity not_gate is
	 port(
		 a : in STD_LOGIC;
		 b : out STD_LOGIC
	     );
end not_gate;

--}} End of automatically maintained section

architecture not_gate of not_gate is
begin

	-- enter your statements here --	  
	
	b <= not a;

end not_gate;
