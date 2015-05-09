---------------------------------------------------------------------------------------------------
--
-- Title       : nand_gate
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : nand_gate.vhd
-- Generated   : Mon Apr  5 21:00:44 2010
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
--{entity {nand_gate} architecture {nand_gate}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity nand_gate is
	 port(
		 a : in STD_LOGIC;
		 b : in STD_LOGIC;
		 c : out STD_LOGIC
	     );
end nand_gate;

--}} End of automatically maintained section

architecture nand_gate of nand_gate is
begin

	-- enter your statements here --		
	
	c <= a nand b;

end nand_gate;
