/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE197_Numeric_Truncation_Error__int_listen_socket_to_short_52b.c
Label Definition File: CWE197_Numeric_Truncation_Error__int.label.xml
Template File: sources-sink-52b.tmpl.c
*/
/*
 * @description
 * CWE: 197 Numeric Truncation Error
 * BadSource: listen_socket Read data using a listen socket (server side)
 * GoodSource: Less than CHAR_MAX
 * Sink: to_short
 *    BadSink : Convert data to a short
 * Flow Variant: 52 Data flow: data passed as an argument from one function to another to another in three different source files
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* include ws2_32.lib when linking */
#define CLOSE_SOCKET closesocket
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define CLOSE_SOCKET close
#define SOCKET int
#endif

#define TCP_PORT 27015
#define LISTEN_BACKLOG 5
#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

/* all the sinks are the same, we just want to know where the hit originated if a tool flags one */

#ifndef OMITBAD

/* bad function declaration */
void CWE197_Numeric_Truncation_Error__int_listen_socket_to_short_52c_badSink(int data);

void CWE197_Numeric_Truncation_Error__int_listen_socket_to_short_52b_badSink(int data)
{
    CWE197_Numeric_Truncation_Error__int_listen_socket_to_short_52c_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good function declaration */
void CWE197_Numeric_Truncation_Error__int_listen_socket_to_short_52c_goodG2BSink(int data);

/* goodG2B uses the GoodSource with the BadSink */
void CWE197_Numeric_Truncation_Error__int_listen_socket_to_short_52b_goodG2BSink(int data)
{
    CWE197_Numeric_Truncation_Error__int_listen_socket_to_short_52c_goodG2BSink(data);
}

#endif /* OMITGOOD */