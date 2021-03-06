/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "VideoConferenceDelegate.h"

#import "VideoConferenceRealTimeChannel.h"



@class GKVoiceChatDictionary, GKVoiceChatService, LoopbackSocketTunnel, NSLock, NSRecursiveLock, NSString, VideoConference;



@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate, VideoConferenceRealTimeChannel>

{

    id <GKVoiceChatClient> client;

    _Bool outputMeteringEnabled;

    _Bool inputMeteringEnabled;

    float outputMeterLevel;

    float inputMeterLevel;

    _Bool microphoneMuted;

    unsigned int curCallID;

    int state;

    GKVoiceChatDictionary *incomingCallDict;

    GKVoiceChatDictionary *outgoingCallDict;

    NSString *sdp;

    struct tagCONNRESULT currentConnResult;

    LoopbackSocketTunnel *tunnel;

    NSRecursiveLock *stateLock;

    NSLock *clientLock;

    GKVoiceChatService *wrapperService;

    int didUseICE;

    int bundle;

    _Bool forceNoICE;

    VideoConference *conf;

    _Bool clientHasRTChannel;

    int chatMode;

    _Bool focus;

}



+ (id)defaultVoiceChatService;

- (_Bool)acceptCallID:(unsigned int)arg1 error:(id *)arg2;

@property int chatMode; // @synthesize chatMode;

- (void)cleanup;

@property(nonatomic) id client; // @synthesize client;

- (id)createInvite:(id *)arg1 toParticipant:(id)arg2 callID:(unsigned int *)arg3;

- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned long long)arg2 error:(id *)arg3;

- (void)dealloc;

- (void)denyCallID:(unsigned int)arg1;

- (void)forceNoICE:(_Bool)arg1;

- (void)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 hResult:(int)arg4;

- (void)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 reason:(id)arg4;

- (void)informClientOfInviteFromParticipant:(id)arg1;

- (void)informClientVoiceChatDidNotStart:(id)arg1;

- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;

- (void)informClientVoiceChatDidStart:(id)arg1;

- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;

- (void)informClientVoiceChatDidStop:(id)arg1;

- (id)init;

@property(readonly, nonatomic) float inputMeterLevel; // @synthesize inputMeterLevel;

- (_Bool)inviteIsValid:(id)arg1;

@property(getter=isFocus) _Bool focus; // @synthesize focus;

@property(getter=isInputMeteringEnabled) _Bool inputMeteringEnabled; // @synthesize inputMeteringEnabled;

@property(getter=isMicrophoneMuted) _Bool microphoneMuted;

@property(getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled; // @synthesize outputMeteringEnabled;

@property(readonly) double localBitrate;

- (id)localDisplayNameForCallID:(unsigned int)arg1;

@property(readonly) double localFramerate;

@property(nonatomic) void *localVideoLayer;

@property(readonly, nonatomic) float outputMeterLevel; // @synthesize outputMeterLevel;

- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;

- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;

@property(readonly) double remoteBitrate;

- (id)remoteDisplayNameForCallID:(unsigned int)arg1;

@property(readonly) double remoteFramerate;

@property float remoteParticipantVolume;

@property(nonatomic) void *remoteVideoLayer;

- (void)resetState;

@property int state; // @synthesize state;

@property GKVoiceChatService *wrapperService; // @synthesize wrapperService;

- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2;

- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2 withCallID:(unsigned int)arg3;

- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;

- (void)stopVoiceChatProc:(id)arg1;

- (void)stopVoiceChatWithParticipantID:(id)arg1;

- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;

- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;

- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;



@end


