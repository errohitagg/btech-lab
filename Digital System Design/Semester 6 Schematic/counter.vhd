library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity counter is
    Port ( clr : in std_logic;
           clk : in std_logic;
           updown : in std_logic;
           count : out std_logic_vector(3 downto 0));
end counter;

architecture Behavioral of counter is
signal temp:std_logic_vector(3 downto 0);
begin

	process (clk, clr)	
	begin
		if(clr = '1') then
			temp<="0000";
		elsif (clk'event and clk='1') then
			if(updown = '1') then
				temp<=temp+1;
			else
				temp<=temp-1;
			end if;
		end if;
	end process;
	count<=temp;

end Behavioral;
