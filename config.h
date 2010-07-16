/*
 * gigargoyle
 *
 * a nighttime composition in opensource
 *
 * this is part of the 2010 binkenlights installation
 * in Giesing, Munich, Germany which is called
 *
 *   a.c.a.b. - all colors are beautiful
 *
 * the installation is run by the Chaos Computer Club Munich
 * as part of the puerto giesing
 * 
 *
 * license:
 *          GPL v2, see the file LICENSE
 * authors:
 *          Matthias Wenzel - aka - mazzoo
 *
 */

#ifndef CONFIG_H
#define CONFIG_H

/* row 0 is the top row */
#define ROW_0_UART "/dev/ttyS4"
#define ROW_1_UART "/dev/ttyS5"
#define ROW_2_UART "/dev/ttyS6"
#define ROW_3_UART "/dev/ttyS7"
/* row 3 is the bottom row */

#define PID_FILE "/var/run/gigargoyle.pid"
#define LOG_FILE "/var/log/gigargoyle.log"

#define ACAB_X 24
#define ACAB_Y  4 /*sigh*/

#define FIFO_DEPTH 1024 /* number of messages to be q'd    */
#define FIFO_WIDTH 2048 /* more than a MTU should be sane  */

#define PORT_QM  0xabac /* tcp port for the queing manager */
#define PORT_IS  0xacab /* tcp port for instant streamers  */
#define PORT_WEB     80 /* tcp port for live watchers      */

#define MAX_WEB_CLIENTS 1024

#define STARTUP_FRAME_DURATION 1.0f/10*1e6 /* in us */
#define MIN_GAP_BUS_TRANSFERS   1000 /* in us */

#define MISSING_PKTS_TO_LOCAL 235 /* how many "missing" packets
				   * from either QM or IS do we tolerate
				   * before switching to local source */

#endif /* CONFIG_H */
