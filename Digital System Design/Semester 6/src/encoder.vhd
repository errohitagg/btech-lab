---------------------------------------------------------------------------------------------------
--
-- Title       : encoder
-- Design      : Semester 6
-- Author      : 0
-- Company     : 0
--
---------------------------------------------------------------------------------------------------
--
-- File        : encoder.vhd
-- Generated   : Sat Apr 10 21:21:02 2010
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
--{entity {encoder} architecture {encoder}}

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity encoder is
	 port(
		 a : in STD_LOGIC_VECTOR(7 downto 0);
		 z : out STD_LOGIC_VECTOR(2 downto 0)
	     );
end encoder;

--}} End of automatically maintained section

architecture encoder of encoder is
begin

	-- enter your statements here --
	process(a)
	begin
		case a is
			when "00000001"=> z<="000";	
			when "00000010"=> z<="001";
			when "00000100"=> z<="010";
			when "00001000"=> z<="011";
			when "00010000"=> z<="100";
			when "00100000"=> z<="101";
			when "01000000"=> z<="110";
			when "10000000"=> z<="111";		 
			when others=> z<="XXX";
		end case;
	end process;
	

end encoder;
