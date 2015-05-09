---------------------------------------------------------------------------------------------------
--
-- Title       : half_adder
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : half_adder.vhd
-- Generated   : Mon Apr  5 21:05:03 2010
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
--{entity {half_adder} architecture {half_adder}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity half_adder is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 c : out STD_LOGIC;
		 s : out STD_LOGIC
	     );
end half_adder;

--}} End of automatically maintained section

architecture half_adder of half_adder is
begin

	-- enter your statements here --				 
	
	s<= a xor b;
	c<= a and b;
	

end half_adder;
