---------------------------------------------------------------------------------------------------
--
-- Title       : xor_gate
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : xor_gate.vhd
-- Generated   : Mon Apr  5 21:03:28 2010
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
--{entity {xor_gate} architecture {xor_gate}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity xor_gate is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 c : out STD_LOGIC
	     );
end xor_gate;

--}} End of automatically maintained section

architecture xor_gate of xor_gate is
begin

	-- enter your statements here --			   
	
	c <= a xor b;

end xor_gate;
