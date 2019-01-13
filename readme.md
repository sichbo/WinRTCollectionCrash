Steps to reproduce.
----
1. Set WinRTTestConsume to mixed-mode debug, x86.
2. Breakpoint ThingCollection.cpp line 18 "m_Impl.Size()"
3. Run
4. Hover "m_Impl". 
5. Everything crashes with an AccessViolation.

Similarly, if you breakpoint on the "managed" UWP side MainPage.xaml.cs line 45. Value inspection of 
"items" will emit "'items.Size' threw an exception of type 'System.InvalidOperationException'"" on the 
`Count` property. In a more complex async scenario, value inspection here can also raise an 
AccessViolation/crash or deadlock the IDE.

