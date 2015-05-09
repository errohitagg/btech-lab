---------------------------------------------------------------------------------------------------
--
-- Title       : decoder
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : decoder.vhd
-- Generated   : Sat Apr 10 21:28:47 2010
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
--{entity {decoder} architecture {decoder}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity decoder is
	 port(
		 a : in STD_LOGIC_VECTOR(2 downto 0);
		 z : out STD_LOGIC_VECTOR(7 downto 0)
	     );
end decoder;

--}} End of automatically maintained section

architecture decoder of decoder is
begin

	-- enter your statements here --	  
	process(a)
	begin
		case a is
			when "000"=> z<="00000001";	
			when "001"=> z<="00000010";
			when "010"=> z<="00000100";
			when "011"=> z<="00001000";
			when "100"=> z<="00010000";
			when "101"=> z<="00100000";
			when "110"=> z<="01000000";
			when "111"=> z<="10000000";		 
			when others=> z<="XXXXXXXX";
		end case;
	end process;

end decoder;
