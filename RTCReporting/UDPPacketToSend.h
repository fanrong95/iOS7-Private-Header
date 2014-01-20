/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData;



@interface UDPPacketToSend : NSObject

{

    int _state;

    int _numberOfChecks;

    int _numberOfRetransmits;

    unsigned short _eventNumber;

    NSData *_data;

}



@property(retain) NSData *data; // @synthesize data=_data;

- (void)dealloc;

@property unsigned short eventNumber; // @synthesize eventNumber=_eventNumber;

- (id)initWithBytes:(char *)arg1 length:(unsigned short)arg2 eventNum:(unsigned short)arg3;

@property int numberOfChecks; // @synthesize numberOfChecks=_numberOfChecks;

@property int numberOfRetransmits; // @synthesize numberOfRetransmits=_numberOfRetransmits;

@property int state; // @synthesize state=_state;



@end


