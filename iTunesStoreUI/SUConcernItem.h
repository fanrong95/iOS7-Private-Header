/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface SUConcernItem : NSObject

{

    _Bool _default;

    NSString *_identifier;

    NSString *_title;

}



- (void)dealloc;

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (id)initWithDictionary:(id)arg1;

@property(nonatomic, getter=isDefaultConcern) _Bool defaultConcern; // @synthesize defaultConcern=_default;

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;



@end


