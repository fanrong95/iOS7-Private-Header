/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMNode.h"


@class DOMNamedNodeMap, NSString;



__attribute__((visibility("hidden")))

@interface DOMDocumentType : DOMNode

{

}



@property(readonly) DOMNamedNodeMap *entities;

@property(readonly) NSString *internalSubset;

@property(readonly) NSString *name;

@property(readonly) DOMNamedNodeMap *notations;

@property(readonly) NSString *publicId;

- (void)remove;

@property(readonly) NSString *systemId;



@end


