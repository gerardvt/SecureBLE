﻿using Xamarin.Forms;
using Xamarin.Forms.Xaml;
using SecureBLE.Droid.ViewModels;

namespace SecureBLE.Droid.Views
{
	[XamlCompilation(XamlCompilationOptions.Compile)]
	public partial class MainView : ContentPage
	{
		public MainView()
		{
			InitializeComponent();
			BindingContext = new MainViewModel();
		}
	}
}