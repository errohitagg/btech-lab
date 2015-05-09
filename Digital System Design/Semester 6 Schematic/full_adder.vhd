library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

--  Uncomment the following lines to use the declarations that are
--  provided for instantiating Xilinx primitive components.
--library UNISIM;
--use UNISIM.VComponents.all;

entity full_adder is
    Port ( a : in std_logic;
           b : in std_logic;
           c : in std_logic;
           s : out std_logic;
           cy : out std_logic);
end full_adder;

architecture Behavioral of full_adder is

begin

	s<= a xor b xor c;
	cy <= (a and b) or (b and c) or (c and a);

end Behavioral;
