---
layout: lua
title: Global
lang: en
---

# Class "Global"




## Static Methods
### GetInstance ()
{: aria-label='StaticFunctions' }
#### [Global](../Hyperspace/Global) .GetInstance ()
{: aria-label='StaticFunctions' }
Returns the main instance of [`Global`](#Global). Always use this to access any members and methods belonging to this class. `Hyperspace.Global.GetInstance()`

______
### IsSeededRun ()
{: aria-label='StaticFunctions' }
#### boolean .IsSeededRun ()
{: aria-label='StaticFunctions' }

___


## Methods
### GetAnimationControl ()
{: aria-label='Functions' }
#### [AnimationControl](../Hyperspace/AnimationControl) :GetAnimationControl ()
{: aria-label='Functions' }
Returns the main instance of [`AnimationControl`](#AnimationControl). Always use this to access any members and methods belonging to the [`AnimationControl`](#AnimationControl) class, or the shortcut `Hyperspace.Animations`.

______
### GetBlueprints ()
{: aria-label='Functions' }
#### [BlueprintManager](../Hyperspace/BlueprintManager) :GetBlueprints ()
{: aria-label='Functions' }
Returns the main instance of [`BlueprintManager`](#BlueprintManager). Always use this to access any members and methods belonging to the [`BlueprintManager`](#BlueprintManager) class, or the shortcut `Hyperspace.Blueprints`.

______
### GetCApp ()
{: aria-label='Functions' }
#### [CApp](../Hyperspace/CApp) :GetCApp ()
{: aria-label='Functions' }
Returns the main instance of [`CApp`](#CApp). Always use this to access any members and methods belonging to the [`CApp`](#CApp) class, or the shortcut `Hyperspace.App`.

______
### GetCrewFactory ()
{: aria-label='Functions' }
#### [CrewMemberFactory](../Hyperspace/CrewMemberFactory) :GetCrewFactory ()
{: aria-label='Functions' }
Returns the main instance of [`CrewMemberFactory`](#CrewMemberFactory). Always use this to access any members and methods belonging to the [`CrewMemberFactory`](#CrewMemberFactory) class, or the shortcut `Hyperspace.CrewFactory`.

______
### GetEventGenerator ()
{: aria-label='Functions' }
#### [EventGenerator](../Hyperspace/EventGenerator) :GetEventGenerator ()
{: aria-label='Functions' }
Returns the main instance of [`EventGenerator`](#EventGenerator). Always use this to access any members and methods belonging to the [`EventGenerator`](#EventGenerator) class, or the shortcut `Hyperspace.Event`.

______
### GetMouseControl ()
{: aria-label='Functions' }
#### [MouseControl](../Hyperspace/MouseControl) :GetMouseControl ()
{: aria-label='Functions' }
Returns the main instance of [`MouseControl`](#MouseControl). Always use this to access any members and methods belonging to the [`MouseControl`](#MouseControl) class, or the shortcut `Hyperspace.Mouse`.

______
### GetScoreKeeper ()
{: aria-label='Functions' }
#### [ScoreKeeper](../Hyperspace/ScoreKeeper) :GetScoreKeeper ()
{: aria-label='Functions' }
Returns the main instance of [`ScoreKeeper`](#ScoreKeeper). Always use this to access any members and methods belonging to the [`ScoreKeeper`](#ScoreKeeper) class, or the shortcut `Hyperspace.Score`.

______
### GetShipInfo ()
{: aria-label='Functions' }
#### [ShipInfo](../Hyperspace/ShipInfo) :GetShipInfo (boolean enemy=false)
{: aria-label='Functions' }
Returns [`ShipInfo`](#ShipInfo) for the player ship if `enemy` is `false`, or for the enemy ship if `enemy` is `true`.

______
### GetShipManager ()
{: aria-label='Functions' }
#### [ShipManager](../Hyperspace/ShipManager) :GetShipManager (integer iShipId)
{: aria-label='Functions' }
Returns the instance of [`ShipManager`](#ShipManager) associated with the given ID (can be 0 or 1). If a ship does not exist for the given ID, returns `nil`.

______
### GetSoundControl ()
{: aria-label='Functions' }
#### [SoundControl](../Hyperspace/SoundControl) :GetSoundControl ()
{: aria-label='Functions' }
Returns the main instance of [`SoundControl`](#SoundControl). Always use this to access any members and methods belonging to the [`SoundControl`](#SoundControl) class, or the shortcut `Hyperspace.Sounds`.

______
### GetTextLibrary ()
{: aria-label='Functions' }
#### [TextLibrary](../Hyperspace/TextLibrary) :GetTextLibrary ()
{: aria-label='Functions' }
Returns the main instance of [`TextLibrary`](#TextLibrary). Always use this to access any members and methods belonging to the [`TextLibrary`](#TextLibrary) class, or the shortcut `Hyperspace.Text`.

______
### GetTutorialManager ()
{: aria-label='Functions' }
#### [TutorialManager](../Hyperspace/TutorialManager) :GetTutorialManager ()
{: aria-label='Functions' }
Returns the main instance of [`TutorialManager`](#TutorialManager). Always use this to access any members and methods belonging to the [`TutorialManager`](#TutorialManager) class, or the shortcut `Hyperspace.Tutorial`.

___


## Fields
### currentSeed (Read-only)
{: aria-label='Variables' }
#### uint .currentSeed
{: aria-label='Variables' }
**Read-only**
The seed for the run.

___
