/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;

@interface ABBoundLayoutConstraint : NSLayoutConstraint  {
    id _object;
    NSString *_keyPath;
}

@property(retain) id object;
@property(copy) NSString * keyPath;

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constantObject:(id)arg7 keyPath:(id)arg8;

- (void)_boundValueDidChange;
- (void)bindConstantToObject:(id)arg1 keyPath:(id)arg2;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;
- (id)object;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)keyPath;

@end