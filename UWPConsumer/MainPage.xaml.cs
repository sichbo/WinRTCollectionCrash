using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace WintRTTestConsume
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
            GetThings();
        }

        A.ThingCollection items;

        void GetThings() {

            items = new A.ThingCollection();

            /*
             * Steps to reproduce.
             * 1. Set WinRTTestConsume to mixed-mode debug, x86.
             * 2. Breakpoint ThingCollection.cpp line 18 "m_Impl.Size()"
             * 3. Run
             * 4. Hover "m_Impl". Everything crashes.
             */
            Debug.WriteLine(items.Count);

            /*
             * Similarly, if you breakpoint on the "managed" UWP side MainPage.xaml.cs line 45. 
             * Value inspection of "items" will emit "'items.Size' threw an exception of type 
             * 'System.InvalidOperationException'"" on the `Count` property. In a more complex 
             * async scenario, value inspection here can also raise an AccessViolation/crash or
             * deadlock the IDE.
             */

        }
    }
}
