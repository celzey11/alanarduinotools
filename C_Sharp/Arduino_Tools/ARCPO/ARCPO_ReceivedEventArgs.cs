#region Header
/***********************************************************************
 * CVS autogenerated informations. Do not modify.
 * File, revision number, date, author and state at the last commit
 * $Id: $
 ***********************************************************************
 * FILENAME : ARCPO_ReceivedEvent.cs
 * AUTHOR : EAST ASIA SITS CAAM Japan
 * CREATION : 
 ************************************************************************/
#endregion

using System;
using System.Collections.Generic;
using System.Text;

namespace ARCPO {
	/// <summary>
	/// Class ARCPO_ReceivedEvent
	/// </summary>
	public class ARCPO_ReceivedEventArgs : EventArgs {
		#region Constants
		#endregion

		#region Attributes
		private DateTime mReceivedTime = DateTime.MinValue;

		private ARCPO_Packet mPacket = null;

		#endregion

		#region Properties
		/// <summary>
		/// Gets the reception time
		/// </summary>
		public DateTime ReceivedTime {
			get { return mReceivedTime; }
		}

		/// <summary>
		/// Gets the received packet
		/// </summary>
		public ARCPO_Packet Packet {
			get { return mPacket; }
		}
		#endregion

		#region Constructor
		/// <summary>
		/// Default constructor for class
		/// </summary>
		public ARCPO_ReceivedEventArgs() {
		}

		/// <summary>
		/// Constructor
		/// </summary>
		/// <param name="pPacket"></param>
		public ARCPO_ReceivedEventArgs(ARCPO_Packet pPacket) {
			this.mReceivedTime = DateTime.Now;
			this.mPacket = pPacket;
		}
		#endregion

		#region Methods
		#endregion

	}
}
#region Log History
/***********************************************************************
 * $Log: $
 *
 * 
 */
#endregion
