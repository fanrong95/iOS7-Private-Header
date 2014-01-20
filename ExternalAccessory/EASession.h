/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EAAccessory, NSInputStream, NSOutputStream, NSString;



@interface EASession : NSObject

{

    EAAccessory *_accessory;

    unsigned int _sessionID;

    NSString *_protocolString;

    NSInputStream *_inputStream;

    NSOutputStream *_outputStream;

    _Bool _openCompleted;

    int _sock;

}



- (void)_endStreams;

- (unsigned int)_sessionID;

- (id)_shortDescription;

- (void)_streamClosed;

@property(readonly, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;

@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;

- (_Bool)isOpenCompleted;

@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;

@property(readonly, nonatomic) NSString *protocolString; // @synthesize protocolString=_protocolString;

- (void)setOpenCompleted:(_Bool)arg1;



@end


