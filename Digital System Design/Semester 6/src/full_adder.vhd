---------------------------------------------------------------------------------------------------
--
-- Title       : full_adder
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : full_adder.vhd
-- Generated   : Mon Apr  5 21:06:47 2010
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
--{entity {full_adder} architecture {full_adder}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity full_adder is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 c : in STD_LOGIC;
		 s : out STD_LOGIC;
		 cy : out STD_LOGIC
	     );
end full_adder;

--}} End of automatically maintained section

architecture full_adder of full_adder is
begin

	-- enter your statements here --							
	
	s<= a xor b xor c;
	cy <= (a and b) or (b and c) or (c and a);

end full_adder;
