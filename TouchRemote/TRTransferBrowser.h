/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



@interface TRTransferBrowser : NSObject

{

    CDStruct_2d76d2d8 *_aesContext;

    struct AirPlayPairingSessionPrivate *_pairingSession;

    long long _pairingState;

    NSObject<OS_dispatch_queue> *_queue;

    _Bool _started;

    id <TRTransferBrowserDelegate> _delegate;

    long long _state;

}



- (void).cxx_destruct;

- (void)_beginScanningIfPowered;

- (void)_didFinishPairing;

- (id)_didReceiveEncryptedData:(id)arg1;

- (int)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;

- (int)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;

- (void)dealloc;

@property(nonatomic) __weak id <TRTransferBrowserDelegate> delegate; // @synthesize delegate=_delegate;

- (id)init;

- (void)start;

@property(readonly, nonatomic) long long state; // @synthesize state=_state;

- (void)stop;



@end


