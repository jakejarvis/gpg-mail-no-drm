//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPNetworkTaskOperation.h>

@interface IMAPSelectMailboxOperation : IMAPNetworkTaskOperation
{
    id <IMAPSelectMailboxOperationDelegate> _delegate;	// 24 = 0x18
}

@property(readonly, nonatomic) __weak id <IMAPSelectMailboxOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000000058ff5
- (void)main;	// IMP=0x0000000000058e7c
- (id)initWithMailboxName:(id)arg1;	// IMP=0x0000000000058dad
- (id)initWithMailboxName:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000058d21

@end

