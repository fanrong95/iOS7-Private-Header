/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3DatabaseFunction.h"


__attribute__((visibility("hidden")))

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction

{

    void *_functionPointer;

    void *_userData;

}



@property(nonatomic) void *functionPointer; // @synthesize functionPointer=_functionPointer;

- (_Bool)registerWithConnection:(id)arg1;

@property(nonatomic) void *userData; // @synthesize userData=_userData;



@end


