//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PopoutAnimationContentProvider-Protocol.h"

@class BannerContainerViewController, ConversationMember, HeaderViewController, MessageView, MessageWebDocumentView, NSImageView, NSLayoutConstraint, NSPopUpButton, NSScrollView, NSStackView, NSString, NSTextField, NSTrackingArea, NSView, SuggestionsBannerViewController;

@interface MessageViewController : NSViewController <NSMenuDelegate, NSStackViewDelegate, PopoutAnimationContentProvider>
{
    BannerContainerViewController *_bannerViewController;	// 104 = 0x68
    HeaderViewController *_headerViewController;	// 112 = 0x70
    SuggestionsBannerViewController *_suggestionsBannerController;	// 120 = 0x78
    NSView *_actionButtons;	// 128 = 0x80
    NSView *_headerView;	// 136 = 0x88
    NSScrollView *_bodyScrollView;	// 144 = 0x90
    MessageWebDocumentView *_webDocumentView;	// 152 = 0x98
    NSTrackingArea *_rolloverTrackingArea;	// 160 = 0xa0
    NSLayoutConstraint *_forwardButtonOffset;	// 168 = 0xa8
    NSPopUpButton *_attachmentsButton;	// 176 = 0xb0
    NSView *_attachmentsDivider;	// 184 = 0xb8
    NSView *_suggestionsBannerRow;	// 192 = 0xc0
    NSStackView *_stackView;	// 200 = 0xc8
    NSLayoutConstraint *_rolloverAlignmentConstraint;	// 208 = 0xd0
    NSView *_relatedMessageView;	// 216 = 0xd8
    NSTextField *_relatedMessageLabel;	// 224 = 0xe0
    NSImageView *_relatedMessageMailboxIconView;	// 232 = 0xe8
}

+ (id)keyPathsForValuesAffectingLoaded;	// IMP=0x0000000100046aa7
+ (id)keyPathsForValuesAffectingPageZoom;	// IMP=0x00000001002238aa
@property(nonatomic) __weak NSImageView *relatedMessageMailboxIconView; // @synthesize relatedMessageMailboxIconView=_relatedMessageMailboxIconView;
@property(nonatomic) __weak NSTextField *relatedMessageLabel; // @synthesize relatedMessageLabel=_relatedMessageLabel;
@property(nonatomic) __weak NSView *relatedMessageView; // @synthesize relatedMessageView=_relatedMessageView;
@property(retain, nonatomic) NSLayoutConstraint *rolloverAlignmentConstraint; // @synthesize rolloverAlignmentConstraint=_rolloverAlignmentConstraint;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak NSView *suggestionsBannerRow; // @synthesize suggestionsBannerRow=_suggestionsBannerRow;
@property(nonatomic) __weak NSView *attachmentsDivider; // @synthesize attachmentsDivider=_attachmentsDivider;
@property(nonatomic) __weak NSPopUpButton *attachmentsButton; // @synthesize attachmentsButton=_attachmentsButton;
@property(retain, nonatomic) NSLayoutConstraint *forwardButtonOffset; // @synthesize forwardButtonOffset=_forwardButtonOffset;
@property(retain, nonatomic) NSTrackingArea *rolloverTrackingArea; // @synthesize rolloverTrackingArea=_rolloverTrackingArea;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSScrollView *bodyScrollView; // @synthesize bodyScrollView=_bodyScrollView;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSView *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) SuggestionsBannerViewController *suggestionsBannerController; // @synthesize suggestionsBannerController=_suggestionsBannerController;
@property(retain, nonatomic) HeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) BannerContainerViewController *bannerViewController; // @synthesize bannerViewController=_bannerViewController;
//- (void).cxx_destruct;	// IMP=0x0000000100226734
- (id)getContentGeometryData;	// IMP=0x00000001002259fb
- (void)getSnapshotParts:(CDUnknownBlockType)arg1;	// IMP=0x0000000100224f39
- (void)stackView:(id)arg1 willDetachViews:(id)arg2;	// IMP=0x0000000100224e75
- (void)stackView:(id)arg1 didReattachViews:(id)arg2;	// IMP=0x0000000100224d5f
- (BOOL)validateMenuItem:(id)arg1;	// IMP=0x0000000100093f19
- (BOOL)validateToolbarItem:(id)arg1;	// IMP=0x0000000100224c61
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100047633
- (void)menuNeedsUpdate:(id)arg1;	// IMP=0x00000001000b6bcc
- (void)exportAttachments:(id)arg1;	// IMP=0x0000000100224bae
- (void)quickLookAllAttachments:(id)arg1;	// IMP=0x00000001000b7eb6
- (void)saveAllAttachmentsWithoutPrompting:(id)arg1;	// IMP=0x0000000100224aaf
- (void)saveAllAttachments:(id)arg1;	// IMP=0x00000001000b7f72
- (void)saveAttachment:(id)arg1;	// IMP=0x00000001002249c1
- (void)viewSource:(id)arg1;	// IMP=0x0000000100224956
- (void)toggleAllHeaders:(id)arg1;	// IMP=0x0000000100224904
- (void)forward:(id)arg1;	// IMP=0x000000010022486f
- (void)replyAll:(id)arg1;	// IMP=0x00000001002247da
- (void)reply:(id)arg1;	// IMP=0x0000000100224745
- (void)delete:(id)arg1;	// IMP=0x00000001002245f7
- (void)keyDown:(id)arg1;	// IMP=0x0000000100224529
- (id)_messageViewer;	// IMP=0x000000010022446a
- (void)mouseExited:(id)arg1;	// IMP=0x0000000100054d4f
- (void)mouseEntered:(id)arg1;	// IMP=0x0000000100054151
- (void)_updateHeaderMouseOver;	// IMP=0x0000000100054e3b
- (void)_updateAttachmentRollover;	// IMP=0x000000010022415f
- (void)_updateRolloverTrackingArea:(id)arg1;	// IMP=0x0000000100223e9e
- (void)_showLoadingProgress;	// IMP=0x0000000100223d66
- (void)_updateWebDocumentViewWithWebDocument:(id)arg1;	// IMP=0x0000000100223c28
- (void)cursorUpdate:(id)arg1;	// IMP=0x0000000100223acb
@property(retain) ConversationMember *representedObject;
@property(retain) MessageView *view;
- (void)loadView;	// IMP=0x00000001002238ca
@property(readonly, nonatomic) BOOL loaded;
@property(nonatomic) double pageZoom;
- (void)tearDown;	// IMP=0x000000010022386d
- (void)dealloc;	// IMP=0x00000001000b5a9c
- (void)awakeFromNib;	// IMP=0x000000010004302b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

