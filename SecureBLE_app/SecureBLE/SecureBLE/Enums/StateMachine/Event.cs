﻿using System;
using System.Collections.Generic;
using System.Text;

namespace SecureBLE.Enums.StateMachine
{
    public enum Event
    {
		EVENT_CONNECT_REQUEST,
		EVENT_PUBLIC_KEY_RECEIVED,
		EVENT_SHARED_SECRET_SUCCESS,
		EVENT_SHARED_SECRET_FAILURE,
		EVENT_RESET
	}
}
