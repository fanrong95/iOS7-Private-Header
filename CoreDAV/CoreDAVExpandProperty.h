/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSSet, NSString;



@interface CoreDAVExpandProperty : NSObject

{

    NSSet *_propertiesToFind;

    NSString *_expandedName;

    NSString *_expandedNameSpace;

}



- (void)dealloc;

@property(retain) NSString *expandedName; // @synthesize expandedName=_expandedName;

@property(retain) NSString *expandedNameSpace; // @synthesize expandedNameSpace=_expandedNameSpace;

- (id)initWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3;

@property(retain) NSSet *propertiesToFind; // @synthesize propertiesToFind=_propertiesToFind;



@end


