﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace TricolorUsbSignalManager {
    sealed class Constants {

        public const int PRODUCT_ID = 0x05df;
        public const int VENDOR_ID = 0x16c0;

        //Don't ask me why, you have to send that 0x01 as the first byte of the packet, otherwise sending fails... too lazy to check why now.
        public const byte PACKET_ID = 0x01;

        public const string NAMED_PIPE_INPUT = "TricolorUsbSignalManagerIn";

        public const byte LED_RED = 0x10;
        public const byte LED_ORANGE = 0x08;
        public const byte LED_GREEN = 0x02;
        public const byte LED_ALL_OFF = 0x00;

    }
}
