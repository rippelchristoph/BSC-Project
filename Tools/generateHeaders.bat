for %%f in (..\Middleware\Source\*.c) do (
  CFormatter.exe copyright.txt %%f
  C2H.exe -o..\Middleware\Include %%f
)

for %%f in (..\Middleware\Platforms\STM32\Source\*.c) do (
  CFormatter.exe copyright.txt %%f
  C2H.exe -o..\Middleware\Library\Platforms\STM32\Include %%f
)

for %%f in (..\Middleware\Library\Platforms\VC120\Source\*.c) do (
  CFormatter.exe copyright.txt %%f
  C2H.exe -o..\Middleware\Library\Platforms\VC120\Include %%f
)

for %%f in (..\Middleware\Binding\Source\*.c) do (
  CFormatter.exe copyright.txt %%f
  C2H.exe -o..\Middleware\Binding\Include %%f
)

for %%f in (..\Common\Library\Source\*.c) do (
  CFormatter.exe copyright.txt %%f
  C2H.exe -o..\Common\Library\Include %%f
)

for %%f in (..\Misc\Library\Source\*.c) do (
  CFormatter.exe copyright.txt %%f
  C2H.exe -o..\Misc\Library\Include %%f
)