#import <Preferences/PSTableCell.h>

@interface HBLinkTableCell : PSTableCell

/// Whether the cell is 64 pixels or more in height.
///
/// This is not set automatically; the specifier for the cell must set the `big` property to true
/// (see examples above).
@property (nonatomic, readonly) BOOL isBig;

/// The view containing the avatar image view.
@property (nonatomic, retain, readonly) UIView *avatarView;

/// The avatar image view.
@property (nonatomic, retain, readonly) UIImageView *avatarImageView;

/// The image to display as the avatar, if enabled.
@property (nonatomic, retain) UIImage *avatarImage;

@end
