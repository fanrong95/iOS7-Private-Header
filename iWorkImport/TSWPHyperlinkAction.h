/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTwoPartAction.h"


@class TSDRep<TSWPHyperlinkHostRepProtocol>, TSWPHyperlinkField;



__attribute__((visibility("hidden")))

@interface TSWPHyperlinkAction : TSWPTwoPartAction

{

    TSWPHyperlinkField *_hyperlinkField;

    TSDRep<TSWPHyperlinkHostRepProtocol> *_hyperlinkRep;

}



+ (id)hyperlinkActionWithHyperlink:(id)arg1 inRep:(id)arg2 action:(id)arg3;

- (void)dealloc;

- (id)initWithHyperlink:(id)arg1 inRep:(id)arg2 action:(id)arg3;



@end


