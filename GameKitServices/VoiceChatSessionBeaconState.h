/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VoiceChatSessionBeaconState : NSObject

{

    struct tagVoiceChatBeacon *lastReceivedBeacon;

    unsigned int sentState;

    unsigned int receivedState;

    _Bool needsSend;

    unsigned int typeToSend;

}



- (void)dealloc;

- (id)init;

- (struct tagVoiceChatBeacon *)lastReceivedBeacon;

@property(nonatomic) _Bool needsSend; // @synthesize needsSend;

@property(nonatomic) unsigned int receivedState; // @synthesize receivedState;

@property(nonatomic) unsigned int sentState; // @synthesize sentState;

- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon *)arg1;

@property(nonatomic) unsigned int typeToSend; // @synthesize typeToSend;



@end


