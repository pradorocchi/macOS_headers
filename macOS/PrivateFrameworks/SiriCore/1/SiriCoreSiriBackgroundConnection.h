//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/SiriCoreStreamProviderDelegate-Protocol.h>

@class NSMutableArray, NSMutableData, NSMutableDictionary, NSString, SiriCoreDataCompressor, SiriCoreDataDecompressor, SiriCorePingInfo, SiriCoreSiriConnectionInfo;
@protocol OS_dispatch_queue, OS_dispatch_source, SiriCoreSiriBackgroundConnectionDelegate, SiriCoreStreamProvider;

@interface SiriCoreSiriBackgroundConnection : NSObject <SiriCoreStreamProviderDelegate>
{
    id <SiriCoreSiriBackgroundConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <SiriCoreStreamProvider> _streamProvider;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    SiriCoreSiriConnectionInfo *_connectionInfo;
    NSMutableData *_bufferedInputData;
    NSMutableData *_bufferedProviderHeaderOutputData;
    NSMutableData *_bufferedGeneralOutputData;
    unsigned char _readBuffer[10240];
    SiriCoreDataDecompressor *_inputDecompressor;
    SiriCoreDataCompressor *_outputCompressor;
    struct __CFHTTPMessage *_httpResponseHeader;
    BOOL _isOpened;
    BOOL _isCanceled;
    BOOL _hasReportedError;
    BOOL _hasFoundTrust;
    NSMutableDictionary *_errorsForConnectionMethods;
    NSObject<OS_dispatch_source> *_aceHeaderTimerSource;
    unsigned long long _aceHeaderTimerFireCount;
    NSObject<OS_dispatch_source> *_pingTimerSource;
    unsigned int _currentPingIndex;
    SiriCorePingInfo *_pingInfo;
    unsigned long long _lastInputLength;
    void *_lastInputDataPointer;
    unsigned long long _inputLengthUnchangedCounter;
    unsigned long long _lastOutputLength;
    void *_lastOutputDataPointer;
    unsigned long long _outputLengthUnchangedCounter;
    unsigned int _currentBarrierIndex;
    NSMutableDictionary *_outstandingBarriers;
    long long _connectionMethod;
    NSMutableData *_safetyNetBuffer;
    double _firstStartTime;
    double _currentStartTime;
    double _currentOpenTime;
    double _firstByteReadTime;
    unsigned long long _startCount;
    unsigned long long _metricsCount;
    NSString *_peerType;
    NSString *_peerVersion;
    NSString *_productTypePrefix;
    BOOL _usesProxyConnection;
    BOOL _deviceIsInWalkaboutExperimentGroup;
    BOOL _siriConnectionUsesPeerManagedSync;
    Class _peerProviderClass;
    NSMutableArray *_outgoingCommandsWithSendCompletions;
}

@property(nonatomic) BOOL deviceIsInWalkaboutExperimentGroup; // @synthesize deviceIsInWalkaboutExperimentGroup=_deviceIsInWalkaboutExperimentGroup;
@property(retain, nonatomic) Class peerProviderClass; // @synthesize peerProviderClass=_peerProviderClass;
@property(nonatomic) BOOL siriConnectionUsesPeerManagedSync; // @synthesize siriConnectionUsesPeerManagedSync=_siriConnectionUsesPeerManagedSync;
@property(nonatomic) BOOL usesProxyConnection; // @synthesize usesProxyConnection=_usesProxyConnection;
@property(copy, nonatomic) NSString *productTypePrefix; // @synthesize productTypePrefix=_productTypePrefix;
@property(copy, nonatomic) NSString *peerVersion; // @synthesize peerVersion=_peerVersion;
@property(copy, nonatomic) NSString *peerType; // @synthesize peerType=_peerType;
@property(nonatomic) __weak id <SiriCoreSiriBackgroundConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_flushOutgoingCommandsAndDispatchSendCompletionWithResult:(long long)arg1 error:(id)arg2;
- (void)_addOutgoingCommandForSendCompletion:(id)arg1;
- (void)_validateTrustForStream:(id)arg1;
- (void)_validateTrustInfo:(id)arg1;
- (void)_connectionMetricsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getConnectionMetrics:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_connectionMethodDescription;
- (id)getConnectionMethodUsed;
- (id)analysisInfo;
- (void)_handleAceEnd;
- (void)_handleAcePong:(unsigned int)arg1;
- (void)_handleAcePing:(unsigned int)arg1;
- (void)_handleAceObject:(id)arg1;
- (void)_handleAceNop;
- (void)_handlePacket:(CDStruct_95d471ab *)arg1;
- (BOOL)_tryReadingParsedDataFromBytes:(const void *)arg1 length:(unsigned long long)arg2 packet:(CDStruct_95d471ab *)arg3 object:(id *)arg4 bytesParsed:(unsigned long long *)arg5 error:(id *)arg6;
- (id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)_tryParsingHTTPHeaderData:(id)arg1 partialMessage:(struct __CFHTTPMessage *)arg2 statusCode:(long long *)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)_tryReadingHTTPHeaderData:(id)arg1 withMessage:(struct __CFHTTPMessage *)arg2 bytesRead:(unsigned long long *)arg3 error:(id *)arg4;
- (id)_readDataFromReadStream:(struct __CFReadStream *)arg1 hasMore:(char *)arg2;
- (void)_sendAcePongWithId:(unsigned int)arg1;
- (void)_sendAcePingWithId:(unsigned int)arg1;
- (void)sendCommand:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_sendProviderHeader;
- (void)_sendGeneralData:(id)arg1;
- (void)_sendData:(id)arg1 bufferedOutputData:(id)arg2;
- (void)_tryToWriteBufferedOutputData;
- (id)_activeBufferedOutputData;
- (id)_userAgent;
- (id)_headerDataForURL:(id)arg1 aceHost:(id)arg2 languageCode:(id)arg3 syncAssistantId:(id)arg4;
- (void)_writeStreamEndEncountered;
- (void)_writeStreamErrorOccurred;
- (void)_writeStreamHasSpaceAvailable;
- (void)_writeStreamDidOpen;
- (void)_readStreamHasBytesAvailable;
- (void)_cancelForExtendedValidationFailureWithTrustInfo:(id)arg1;
- (BOOL)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (id)_connectionType;
- (BOOL)_hasReadACEHeader;
- (BOOL)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)_hasReadHTTPHeader;
- (void)_readStreamEndEncountered;
- (void)_readStreamErrorOccurred;
- (void)streamProvider:(id)arg1 receivedError:(id)arg2;
- (void)stopHeartBeat;
- (void)startHeartBeat;
- (void)_cancelOutstandingBarriers;
- (void)_handleBarrierReply:(unsigned int)arg1;
- (void)barrier:(CDUnknownBlockType)arg1;
- (long long)_checkPings;
- (long long)_checkForProgressOnReadingData;
- (void)_pingTimerFired;
- (void)_resumePingTimer;
- (void)setSendPings:(BOOL)arg1;
- (void)_aceHeaderTimeoutFired:(id)arg1 afterTimeout:(double)arg2;
- (void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)arg1;
- (BOOL)_wifiMayBeBetterThanCurrentStream;
- (BOOL)_tcpInfoIndicatesPoorLinkQuality;
- (BOOL)_wifiIsAvailable;
- (BOOL)_canFallBackFromError:(id)arg1;
- (void)_fallBackToNextConnectionMethodWithError:(id)arg1 orElse:(CDUnknownBlockType)arg2;
- (void)_fallBackToNextConnectionMethodWithError:(id)arg1;
- (BOOL)_shouldTrySameConnectionMethodForMethod:(long long)arg1 error:(id)arg2;
- (BOOL)_hasBufferedDataOrOutstandingPings;
- (id)_bestErrorBetweenError:(id)arg1 peerError:(id)arg2;
- (void)_didEncounterError:(id)arg1;
- (void)_closeConnection;
- (void)_closeConnectionAndPrepareForReconnect:(BOOL)arg1;
- (void)_initializeBufferedGeneralOutputDataAndSend:(BOOL)arg1;
- (id)_aceHeaderData;
- (id)_httpHeaderData;
- (void)cancel;
- (void)_didOpenStreamPairWithInitialDataPayload:(id)arg1 withBufferedLength:(unsigned long long)arg2 url:(id)arg3 completedWithInputStream:(id)arg4 outputStream:(id)arg5 error:(id)arg6;
- (void)_startWithConnectionInfo:(id)arg1 allowFallbackToNewConnectionMethod:(BOOL)arg2;
- (void)startWithConnectionInfo:(id)arg1;
- (long long)_nextConnectionMethod;
- (BOOL)_usingNetwork;
- (BOOL)_usingPeer;
- (BOOL)_usingPOPOnPeer;
- (BOOL)_usingFlorence;
- (BOOL)_usingPOP;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

