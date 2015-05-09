---------------------------------------------------------------------------------------------------
--
-- Title       : converter
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : converter.vhd
-- Generated   : Thu Apr 22 10:56:06 2010
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
--{entity {converter} architecture {converter}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity converter is
	 port(
		 a : in STD_LOGIC_VECTOR(3 downto 0);
		 y : out STD_LOGIC_VECTOR(3 downto 0)
	     );
end converter;

--}} End of automatically maintained section

architecture converter of converter is
begin

	-- enter your statements here --  
	
	with a select
	y <= "0011" when "0000",
		"0100" when "0001",
		"0101" when "0010",
		"0110" when "0011",
		"0111" when "0100",
		"1000" when "0101",
		"1001" when "0110",
		"1010" when "0111",
		"1011" when "1000",
		"1100" when "1001",
		"XXXX" when others;

end converter;
