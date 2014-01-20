/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSFileHandle, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;



@interface PKPrinterBrowser : NSObject

{

    id <PKPrinterBrowserDelegate> delegate;

    struct _DNSServiceRef_t *mainBrowserRef;

    struct _DNSServiceRef_t *ippBrowserRef;

    struct _DNSServiceRef_t *ippsBrowserRef;

    struct _DNSServiceRef_t *localippBrowserRef;

    struct _DNSServiceRef_t *localippsBrowserRef;

    NSMutableDictionary *printers;

    NSMutableDictionary *printersByUUID;

    NSFileHandle *handle;

    unsigned char originalCellFlag;

    unsigned char originalWifiFlag;

    NSObject<OS_dispatch_queue> *printersQueue;

    NSMutableArray *pendingList;

}



+ (id)browserWithDelegate:(id)arg1;

- (void)addBlockToPendingList:(id)arg1;

- (void)addLimboPrinter:(id)arg1 local:(_Bool)arg2;

- (void)addQueryResult:(id)arg1 toPrinter:(id)arg2;

- (void)addWithPrinterURI:(id)arg1 andBonjourURI:(id)arg2 andDisplayName:(id)arg3;

- (void)addWithPrinterURI:(id)arg1 andDisplayName:(id)arg2;

- (void)browseCallback:(unsigned int)arg1 interface:(unsigned int)arg2 name:(const char *)arg3 regType:(const char *)arg4 domain:(const char *)arg5;

- (void)browseLocalCallback:(unsigned int)arg1 interface:(unsigned int)arg2 name:(const char *)arg3 regType:(const char *)arg4 domain:(const char *)arg5;

- (void)dealloc;

@property(nonatomic) id <PKPrinterBrowserDelegate> delegate; // @synthesize delegate;

@property(retain, nonatomic) NSFileHandle *handle; // @synthesize handle;

- (id)initWithDelegate:(id)arg1;

@property(retain, nonatomic) NSMutableArray *pendingList; // @synthesize pendingList;

@property(retain, nonatomic) NSMutableDictionary *printers; // @synthesize printers;

@property(retain, nonatomic) NSMutableDictionary *printersByUUID; // @synthesize printersByUUID;

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *printersQueue; // @synthesize printersQueue;

- (void)queryCallback:(int)arg1 flags:(unsigned int)arg2 fullName:(const char *)arg3 rdlen:(unsigned short)arg4 rdata:(const void *)arg5;

- (void)queryHardcodedPrinters;

- (void)reissueTXTQuery:(id)arg1;

- (void)removePrinter:(id)arg1;



@end


