//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPreferencesModule.h"

@class FontPreferenceContainerView, NSArray, NSFont, NSMutableDictionary, NSPopUpButton, NSTextView;

@interface FontsAndColorsPreferences : NSPreferencesModule
{
    NSMutableDictionary *_midYDict;	// 48 = 0x30
    BOOL _isQuotedTextColored;	// 56 = 0x38
    BOOL _isPlainTextOfFixedWidth;	// 57 = 0x39
    NSFont *_messageListFont;	// 64 = 0x40
    NSFont *_messageFont;	// 72 = 0x48
    NSFont *_fixedWidthFont;	// 80 = 0x50
    NSArray *_colorList;	// 88 = 0x58
    FontPreferenceContainerView *_messageListContainerView;	// 96 = 0x60
    FontPreferenceContainerView *_messageTextContainerView;	// 104 = 0x68
    FontPreferenceContainerView *_fixedWidthContainerView;	// 112 = 0x70
    NSPopUpButton *_colorPopupOne;	// 120 = 0x78
    NSPopUpButton *_colorPopupTwo;	// 128 = 0x80
    NSPopUpButton *_colorPopupThree;	// 136 = 0x88
    NSTextView *_exampleTextView;	// 144 = 0x90
    NSArray *_fontPrefContainerViews;	// 152 = 0x98
    double _containerSuperViewSpacingY;	// 160 = 0xa0
    double _containerContainerSpacingY;	// 168 = 0xa8
    long long _changingFontPreference;	// 176 = 0xb0
    NSPopUpButton *_lastColorPopupSelected;	// 184 = 0xb8
}

+ (id)keyPathsForValuesAffectingFixedWidthSampleFont;	// IMP=0x00000001000a59be
+ (id)keyPathsForValuesAffectingMessageSampleFont;	// IMP=0x00000001000a5aff
+ (id)keyPathsForValuesAffectingMessageListSampleFont;	// IMP=0x00000001000a5b8f
@property(nonatomic) __weak NSPopUpButton *lastColorPopupSelected; // @synthesize lastColorPopupSelected=_lastColorPopupSelected;
@property(nonatomic) long long changingFontPreference; // @synthesize changingFontPreference=_changingFontPreference;
@property(nonatomic) double containerContainerSpacingY; // @synthesize containerContainerSpacingY=_containerContainerSpacingY;
@property(nonatomic) double containerSuperViewSpacingY; // @synthesize containerSuperViewSpacingY=_containerSuperViewSpacingY;
@property(copy, nonatomic) NSArray *fontPrefContainerViews; // @synthesize fontPrefContainerViews=_fontPrefContainerViews;
@property(retain, nonatomic) NSTextView *exampleTextView; // @synthesize exampleTextView=_exampleTextView;
@property(nonatomic) __weak NSPopUpButton *colorPopupThree; // @synthesize colorPopupThree=_colorPopupThree;
@property(nonatomic) __weak NSPopUpButton *colorPopupTwo; // @synthesize colorPopupTwo=_colorPopupTwo;
@property(nonatomic) __weak NSPopUpButton *colorPopupOne; // @synthesize colorPopupOne=_colorPopupOne;
@property(nonatomic) __weak FontPreferenceContainerView *fixedWidthContainerView; // @synthesize fixedWidthContainerView=_fixedWidthContainerView;
@property(nonatomic) __weak FontPreferenceContainerView *messageTextContainerView; // @synthesize messageTextContainerView=_messageTextContainerView;
@property(nonatomic) __weak FontPreferenceContainerView *messageListContainerView; // @synthesize messageListContainerView=_messageListContainerView;
@property(retain, nonatomic) NSArray *colorList; // @synthesize colorList=_colorList;
@property(nonatomic) BOOL isPlainTextOfFixedWidth; // @synthesize isPlainTextOfFixedWidth=_isPlainTextOfFixedWidth;
@property(nonatomic) BOOL isQuotedTextColored; // @synthesize isQuotedTextColored=_isQuotedTextColored;
@property(retain, nonatomic) NSFont *fixedWidthFont; // @synthesize fixedWidthFont=_fixedWidthFont;
@property(retain, nonatomic) NSFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) NSFont *messageListFont; // @synthesize messageListFont=_messageListFont;
- (void).cxx_destruct;	// IMP=0x000000010018576c
- (void)_setFont:(id)arg1 forPreferenceContainer:(id)arg2;	// IMP=0x00000001001854ca
- (id)_getFontForPreferenceContainer:(id)arg1;	// IMP=0x0000000100185466
- (unsigned long long)validModesForFontPanel:(id)arg1;	// IMP=0x000000010018545b
- (void)_colorPicked:(id)arg1;	// IMP=0x0000000100185361
- (void)colorPopupChanged:(id)arg1;	// IMP=0x0000000100185158
- (void)colorQuotesButtonClicked:(id)arg1;	// IMP=0x000000010018509f
- (void)_updateColorList;	// IMP=0x0000000100184e55
- (void)_updateExampleTextView;	// IMP=0x00000001000a71c2
- (void)_setColor:(id)arg1 forPopup:(id)arg2;	// IMP=0x00000001000a6e04
- (void)_setOtherColor:(id)arg1 forPopup:(id)arg2;	// IMP=0x00000001000a70c7
- (void)changeFont:(id)arg1;	// IMP=0x0000000100184cbd
- (double)_sizeContainerView:(id)arg1;	// IMP=0x00000001000a75f7
- (id)_containerViewForFontPreference:(long long)arg1;	// IMP=0x0000000100184c49
- (void)toggleUseFixedWidthFont:(id)arg1;	// IMP=0x0000000100184bc5
- (void)toggleColorQuotedText:(id)arg1;	// IMP=0x0000000100184b41
- (void)selectFont:(id)arg1;	// IMP=0x00000001001849fa
- (void)moduleWillBeRemoved;	// IMP=0x00000001000a8b6e
- (void)_populateFontPrefContainers;	// IMP=0x00000001000a6465
- (id)_sampleFontForFont:(id)arg1;	// IMP=0x00000001000a5a4e
@property(readonly, nonatomic) NSFont *fixedWidthSampleFont;
@property(readonly, nonatomic) NSFont *messageSampleFont;
@property(readonly, nonatomic) NSFont *messageListSampleFont;
- (void)_replaceExampleTextView;	// IMP=0x00000001000a65b4
- (id)titleForIdentifier:(id)arg1;	// IMP=0x000000010009f6a1
- (BOOL)isResizable;	// IMP=0x00000001000a8004
- (void)_layoutFromFontPreference:(long long)arg1;	// IMP=0x00000001000a7c83
- (void)_updateAutoresizeFlags:(long long)arg1;	// IMP=0x0000000100184828
- (void)_growWindowVertically:(double)arg1 animate:(BOOL)arg2;	// IMP=0x00000001000a7b93
- (void)initializeFromDefaults;	// IMP=0x00000001000a68ff
- (id)imageForPreferenceNamed:(id)arg1;	// IMP=0x000000010009f92b
- (void)awakeFromNib;	// IMP=0x00000001000a6146

@end

