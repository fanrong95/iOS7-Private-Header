/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSArray, NSString;



@interface MFSMTPResponse : NSObject <NSCopying>

{

    id _lastResponseLine;

    int _status;

    unsigned int _statusClass:10;

    unsigned int _statusSubject:10;

    unsigned int _statusDetail:10;

    NSString *_statusString;

    NSArray *_continuationResponses;

}



- (void)_updateEnhancedStatusCodesFromLastResponse;

@property(retain, nonatomic) NSArray *continuationResponses; // @synthesize continuationResponses=_continuationResponses;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;

- (int)failureReason;

- (id)initWithStatus:(int)arg1;

- (id)lastResponseLine;

- (void)setLastResponseLine:(id)arg1;

- (void)setStatus:(int)arg1;

@property(readonly, nonatomic) int status; // @synthesize status=_status;

@property(readonly, nonatomic) unsigned int statusClass; // @synthesize statusClass=_statusClass;

@property(readonly, nonatomic) unsigned int statusDetail; // @synthesize statusDetail=_statusDetail;

@property(readonly, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;

@property(readonly, nonatomic) unsigned int statusSubject; // @synthesize statusSubject=_statusSubject;



@end


