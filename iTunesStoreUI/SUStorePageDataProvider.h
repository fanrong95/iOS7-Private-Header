/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ISDataProvider.h"



@class ISPropertyListProvider, SUClientInterface;



@interface SUStorePageDataProvider : ISDataProvider

{

    SUClientInterface *_clientInterface;

    long long _outputType;

    ISPropertyListProvider *_propertyListDataProvider;

}



- (void)_loadPersonalizedStoreOffersForPage:(id)arg1;

@property(retain) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;

- (void)dealloc;

@property long long outputType; // @synthesize outputType=_outputType;

- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;

@property(copy) ISPropertyListProvider *propertyListDataProvider; // @synthesize propertyListDataProvider=_propertyListDataProvider;



@end


