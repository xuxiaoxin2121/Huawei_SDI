#ifndef __EPBACK_ADMCMD_H
#define __EPBACK_ADMCMD_H

//errcode related to admin cmd
#define CMD_ILLEGAL_ERR (70001)
#define CMD_SEND_NOT_COMPLETED (70002)
#define CMD_CHANNEL_NOT_ACTIVED (70003)
#define CMD_SEND_LEN_ILLEGAL (70004)
#define CMD_OVERDUE (70005)
#define CMD_SEND_TO_X86_FAIL (70006)
#define CMD_NOT_GET_X86_RESPONSE (70007)
#define CMD_GET_RESULT_DATA_FAIL (70008)
#define CMD_RESULT_DATA_CRC_FAIL (70009)

#define EPFRONT_CMD_VIRADDRESS_INVALID (70011)
#define EPFRONT_CMD_DATA_FROM_DEVICE_CRC_FAIL (70012)
#define EPFRONT_CMD_RES_FILE_OPEN_FAIL (70013)
#define EPFRONT_ADM_CMD_FILE_READ_ERR (70014)
#define EPFRONT_ADM_CMD_EXEC_TIMEOUT_ERR (70015)

#define EPBACK_COPY_TO_USER_FAIL (70016)
#define EPFRONT_INNER_ERR_OR_CMD_NULL (70017)
#define EPFRONT_INNER_SMAIN_NULL (70018)

#define EPBACK_COPY_FROM_USER_FAIL (70019)
#define CMD_RES_DATA_TRANSFER_ERROR (70020)
#define EPBACK_ADMIN_STR_NULL (70021)

#define SEC_TO_MS(x)     ((x)*1000)
#define EPBACK_ADM_CMD_SEM_WAIT_TIME (SEC_TO_MS(30))
#define EPBACK_ADM_CMD_RET_WAIT_TIME (EPBACK_ADM_CMD_SEM_WAIT_TIME)
#define EPFRONT_ADM_CMD_EXEC_TIMEOUT (25 * HZ)


#define ADM_CMD_SET_DATA_LEN (100*1024+1)
#define ADM_CMD_MAX_LEN (ADM_CMD_SET_DATA_LEN)
#define ADM_CMD_SET_FILE_NAME ("/tmp/data")

#define ADM_CMD_DATA_RESULT_IF_COMPLETED_MASK (0x0f0000)
#endif


