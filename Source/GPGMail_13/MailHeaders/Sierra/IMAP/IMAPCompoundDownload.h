//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPDownload.h>

@class NSArray, NSMutableArray;

@interface IMAPCompoundDownload : IMAPDownload
{
    NSMutableArray *_subdownloads;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000025878
- (unsigned int)expectedLength;	// IMP=0x0000000000025770
- (unsigned int)bytesFetched;	// IMP=0x00000000000256dd
- (id)error;	// IMP=0x0000000000025518
- (BOOL)isComplete;	// IMP=0x000000000002535d
- (void)processResults;	// IMP=0x00000000000252ff
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;	// IMP=0x00000000000250e9
- (void)removeSubdownload:(id)arg1;	// IMP=0x0000000000025066
- (void)addSubdownload:(id)arg1;	// IMP=0x0000000000024eca
- (void)removeObjectFromSubdownloadsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024e6c
- (id)objectInSubdownloadsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024dfb
@property(readonly) unsigned long long countOfSubdownloads;
@property(readonly, copy) NSArray *subdownloads;
- (id)description;	// IMP=0x0000000000024c66
- (id)createCopy;	// IMP=0x0000000000024a5a

@end

