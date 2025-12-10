---
layout: lua
title: CrewMember
lang: en
---

# Class "CrewMember"


## Constructors
### CrewMember ()
{: aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ()
{: aria-label='Constructors' }

______
### CrewMember ()
{: aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer shipId, boolean enemy, [CrewAnimation](../Hyperspace/CrewAnimation) animation)
{: aria-label='Constructors' }

___



## Static Methods
### GetSkillFromSystem ()
{: aria-label='StaticFunctions' }
#### integer .GetSkillFromSystem (integer systemId)
{: aria-label='StaticFunctions' }

___


## Methods
### ActivatePower ()
{: aria-label='Functions' }
#### void :ActivatePower ()
{: aria-label='Functions' }

______
### ApplyDamage ()
{: aria-label='Functions' }
#### boolean :ApplyDamage (number damage)
{: aria-label='Functions' }

______
### AtFinalGoal ()
{: aria-label='Functions' }
#### boolean :AtFinalGoal ()
{: aria-label='Functions' }

______
### AtGoal ()
{: aria-label='Functions' }
#### boolean :AtGoal ()
{: aria-label='Functions' }

______
### BadAtCombat ()
{: aria-label='Functions' }
#### boolean :BadAtCombat ()
{: aria-label='Functions' }

______
### BlockRoom ()
{: aria-label='Functions' }
#### integer :BlockRoom ()
{: aria-label='Functions' }

______
### CanBurn ()
{: aria-label='Functions' }
#### boolean :CanBurn ()
{: aria-label='Functions' }

______
### CanFight ()
{: aria-label='Functions' }
#### boolean :CanFight ()
{: aria-label='Functions' }

______
### CanHeal ()
{: aria-label='Functions' }
#### boolean :CanHeal ()
{: aria-label='Functions' }

______
### CanMan ()
{: aria-label='Functions' }
#### boolean :CanMan ()
{: aria-label='Functions' }

______
### CanRepair ()
{: aria-label='Functions' }
#### boolean :CanRepair ()
{: aria-label='Functions' }

______
### CanSabotage ()
{: aria-label='Functions' }
#### boolean :CanSabotage ()
{: aria-label='Functions' }

______
### CanStim ()
{: aria-label='Functions' }
#### boolean :CanStim ()
{: aria-label='Functions' }

______
### CanSuffocate ()
{: aria-label='Functions' }
#### boolean :CanSuffocate ()
{: aria-label='Functions' }

______
### CanTeleport ()
{: aria-label='Functions' }
#### boolean :CanTeleport ()
{: aria-label='Functions' }

______
### CheckFighting ()
{: aria-label='Functions' }
#### void :CheckFighting ()
{: aria-label='Functions' }

______
### CheckForTeleport ()
{: aria-label='Functions' }
#### void :CheckForTeleport ()
{: aria-label='Functions' }

______
### CheckRoomPath ()
{: aria-label='Functions' }
#### boolean :CheckRoomPath (integer roomId)
{: aria-label='Functions' }

______
### CheckSkills ()
{: aria-label='Functions' }
#### void :CheckSkills ()
{: aria-label='Functions' }

______
### Cleanup ()
{: aria-label='Functions' }
#### void :Cleanup ()
{: aria-label='Functions' }

______
### ClearPath ()
{: aria-label='Functions' }
#### void :ClearPath ()
{: aria-label='Functions' }

______
### ClearPosition ()
{: aria-label='Functions' }
#### void :ClearPosition ()
{: aria-label='Functions' }

______
### ClearTask ()
{: aria-label='Functions' }
#### void :ClearTask ()
{: aria-label='Functions' }

______
### Clone ()
{: aria-label='Functions' }
#### void :Clone ()
{: aria-label='Functions' }

______
### CloseDoorBehind ()
{: aria-label='Functions' }
#### void :CloseDoorBehind ([Door](../Hyperspace/Door) door)
{: aria-label='Functions' }

______
### ContainsPoint ()
{: aria-label='Functions' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Functions' }

______
### CountForVictory ()
{: aria-label='Functions' }
#### boolean :CountForVictory ()
{: aria-label='Functions' }

______
### CycleColorLayer ()
{: aria-label='Functions' }
#### void :CycleColorLayer (integer unk)
{: aria-label='Functions' }

______
### DirectModifyHealth ()
{: aria-label='Functions' }
#### boolean :DirectModifyHealth (number health)
{: aria-label='Functions' }

______
### EmptySlot ()
{: aria-label='Functions' }
#### void :EmptySlot ()
{: aria-label='Functions' }

______
### ExactTarget ()
{: aria-label='Functions' }
#### boolean :ExactTarget ()
{: aria-label='Functions' }

______
### FindSlot ()
{: aria-label='Functions' }
#### [Slot](../Hyperspace/Slot) :FindSlot (integer roomId, integer slotId, boolean closeEnough)
{: aria-label='Functions' }

______
### FireFightingSoundEffect ()
{: aria-label='Functions' }
#### boolean :FireFightingSoundEffect ()
{: aria-label='Functions' }

______
### ForceMindControl ()
{: aria-label='Functions' }
#### void :ForceMindControl (boolean force)
{: aria-label='Functions' }

______
### Functional ()
{: aria-label='Functions' }
#### boolean :Functional ()
{: aria-label='Functions' }

______
### GetControllable ()
{: aria-label='Functions' }
#### boolean :GetControllable ()
{: aria-label='Functions' }

______
### GetDamageMultiplier ()
{: aria-label='Functions' }
#### number :GetDamageMultiplier ()
{: aria-label='Functions' }

______
### GetFinalGoal ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :GetFinalGoal ()
{: aria-label='Functions' }

______
### GetFireRepairMultiplier ()
{: aria-label='Functions' }
#### number :GetFireRepairMultiplier ()
{: aria-label='Functions' }

______
### GetIntegerHealth ()
{: aria-label='Functions' }
#### integer :GetIntegerHealth ()
{: aria-label='Functions' }

______
### GetIntruder ()
{: aria-label='Functions' }
#### boolean :GetIntruder ()
{: aria-label='Functions' }

______
### GetLocation ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :GetLocation ()
{: aria-label='Functions' }

______
### GetLongName ()
{: aria-label='Functions' }
#### string :GetLongName ()
{: aria-label='Functions' }

______
### GetMaxHealth ()
{: aria-label='Functions' }
#### integer :GetMaxHealth ()
{: aria-label='Functions' }

______
### GetMoveSpeed ()
{: aria-label='Functions' }
#### number :GetMoveSpeed ()
{: aria-label='Functions' }

______
### GetMoveSpeedMultiplier ()
{: aria-label='Functions' }
#### number :GetMoveSpeedMultiplier ()
{: aria-label='Functions' }

______
### GetName ()
{: aria-label='Functions' }
#### string :GetName ()
{: aria-label='Functions' }

______
### GetNewGoal ()
{: aria-label='Functions' }
#### boolean :GetNewGoal ()
{: aria-label='Functions' }

______
### GetNextGoal ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :GetNextGoal ()
{: aria-label='Functions' }

______
### GetPosition ()
{: aria-label='Functions' }
#### [Point](../Hyperspace/Point) :GetPosition ()
{: aria-label='Functions' }

______
### GetPowerCooldown ()
{: aria-label='Functions' }
#### pair\<number, number\> :GetPowerCooldown ()
{: aria-label='Functions' }

______
### GetPriority ()
{: aria-label='Functions' }
#### integer :GetPriority ()
{: aria-label='Functions' }

______
### GetRepairSpeed ()
{: aria-label='Functions' }
#### number :GetRepairSpeed ()
{: aria-label='Functions' }

______
### GetRepairingId ()
{: aria-label='Functions' }
#### integer :GetRepairingId ()
{: aria-label='Functions' }

______
### GetResisted ()
{: aria-label='Functions' }
#### boolean :GetResisted ()
{: aria-label='Functions' }

______
### GetRoomDamage ()
{: aria-label='Functions' }
#### [Damage](../Hyperspace/Damage) :GetRoomDamage ()
{: aria-label='Functions' }

______
### GetSavedPosition ()
{: aria-label='Functions' }
#### [Slot](../Hyperspace/Slot) :GetSavedPosition ()
{: aria-label='Functions' }

______
### GetSkillLevel ()
{: aria-label='Functions' }
#### integer :GetSkillLevel (integer skillId)
{: aria-label='Functions' }

______
### GetSkillModifier ()
{: aria-label='Functions' }
#### number :GetSkillModifier (integer skillId)
{: aria-label='Functions' }

______
### GetSkillProgress ()
{: aria-label='Functions' }
#### pair\<integer, integer\> :GetSkillProgress (integer skillId)
{: aria-label='Functions' }

______
### GetSpecies ()
{: aria-label='Functions' }
#### string :GetSpecies ()
{: aria-label='Functions' }

______
### GetSuffocationMultiplier ()
{: aria-label='Functions' }
#### number :GetSuffocationMultiplier ()
{: aria-label='Functions' }

______
### GetTooltip ()
{: aria-label='Functions' }
#### string :GetTooltip ()
{: aria-label='Functions' }

______
### GetUniqueRepairing ()
{: aria-label='Functions' }
#### string :GetUniqueRepairing ()
{: aria-label='Functions' }

______
### HasSpecialPower ()
{: aria-label='Functions' }
#### boolean :HasSpecialPower ()
{: aria-label='Functions' }

______
### IncreaseSkill ()
{: aria-label='Functions' }
#### void :IncreaseSkill (integer skillId)
{: aria-label='Functions' }

______
### InitializeSkills ()
{: aria-label='Functions' }
#### void :InitializeSkills ()
{: aria-label='Functions' }

______
### InsideRoom ()
{: aria-label='Functions' }
#### boolean :InsideRoom (integer roomId)
{: aria-label='Functions' }

______
### IsAnaerobic ()
{: aria-label='Functions' }
#### boolean :IsAnaerobic ()
{: aria-label='Functions' }

______
### IsBusy ()
{: aria-label='Functions' }
#### boolean :IsBusy ()
{: aria-label='Functions' }

______
### IsCloned ()
{: aria-label='Functions' }
#### boolean :IsCloned ()
{: aria-label='Functions' }

______
### IsCrew ()
{: aria-label='Functions' }
#### boolean :IsCrew ()
{: aria-label='Functions' }

______
### IsDead ()
{: aria-label='Functions' }
#### boolean :IsDead ()
{: aria-label='Functions' }

______
### IsDrone ()
{: aria-label='Functions' }
#### boolean :IsDrone ()
{: aria-label='Functions' }

______
### IsManningArtillery ()
{: aria-label='Functions' }
#### boolean :IsManningArtillery ()
{: aria-label='Functions' }

______
### IsTelepathic ()
{: aria-label='Functions' }
#### boolean :IsTelepathic ()
{: aria-label='Functions' }

______
### Jump ()
{: aria-label='Functions' }
#### void :Jump ()
{: aria-label='Functions' }

______
### Kill ()
{: aria-label='Functions' }
#### void :Kill (boolean noClone)
{: aria-label='Functions' }

______
### LoadState ()
{: aria-label='Functions' }
#### void :LoadState (integer fileHelper)
{: aria-label='Functions' }

______
### MasterSkill ()
{: aria-label='Functions' }
#### void :MasterSkill (integer skillId)
{: aria-label='Functions' }

______
### ModifyHealth ()
{: aria-label='Functions' }
#### void :ModifyHealth (number health)
{: aria-label='Functions' }

______
### MoveToRoom ()
{: aria-label='Functions' }
#### boolean :MoveToRoom (integer roomId, integer slotId, boolean forceMove)
{: aria-label='Functions' }

______
### MultiShots ()
{: aria-label='Functions' }
#### boolean :MultiShots ()
{: aria-label='Functions' }

______
### NeedFrozenLocation ()
{: aria-label='Functions' }
#### boolean :NeedFrozenLocation ()
{: aria-label='Functions' }

______
### NeedsSlot ()
{: aria-label='Functions' }
#### boolean :NeedsSlot ()
{: aria-label='Functions' }

______
### OnInit ()
{: aria-label='Functions' }
#### boolean :OnInit ()
{: aria-label='Functions' }

______
### OnLoop ()
{: aria-label='Functions' }
#### void :OnLoop ()
{: aria-label='Functions' }

______
### OnRender ()
{: aria-label='Functions' }
#### void :OnRender (boolean outlineOnly)
{: aria-label='Functions' }

______
### OnRenderHealth ()
{: aria-label='Functions' }
#### void :OnRenderHealth ()
{: aria-label='Functions' }

______
### OnRenderPath ()
{: aria-label='Functions' }
#### void :OnRenderPath ()
{: aria-label='Functions' }

______
### OutOfGame ()
{: aria-label='Functions' }
#### boolean :OutOfGame ()
{: aria-label='Functions' }

______
### PermanentDeath ()
{: aria-label='Functions' }
#### boolean :PermanentDeath ()
{: aria-label='Functions' }

______
### PositionShift ()
{: aria-label='Functions' }
#### number :PositionShift ()
{: aria-label='Functions' }

______
### PowerReady ()
{: aria-label='Functions' }
#### boolean :PowerReady ()
{: aria-label='Functions' }

______
### ProvidesPower ()
{: aria-label='Functions' }
#### boolean :ProvidesPower ()
{: aria-label='Functions' }

______
### ProvidesVision ()
{: aria-label='Functions' }
#### boolean :ProvidesVision ()
{: aria-label='Functions' }

______
### ReadyToFight ()
{: aria-label='Functions' }
#### boolean :ReadyToFight ()
{: aria-label='Functions' }

______
### RenderSkillUpAnimation ()
{: aria-label='Functions' }
#### void :RenderSkillUpAnimation ([Point](../Hyperspace/Point) pos)
{: aria-label='Functions' }

______
### Repairing ()
{: aria-label='Functions' }
#### boolean :Repairing ()
{: aria-label='Functions' }

______
### RepairingFire ()
{: aria-label='Functions' }
#### boolean :RepairingFire ()
{: aria-label='Functions' }

______
### RepairingSystem ()
{: aria-label='Functions' }
#### boolean :RepairingSystem ()
{: aria-label='Functions' }

______
### ResetPower ()
{: aria-label='Functions' }
#### void :ResetPower ()
{: aria-label='Functions' }

______
### Restart ()
{: aria-label='Functions' }
#### void :Restart ()
{: aria-label='Functions' }

______
### RestorePosition ()
{: aria-label='Functions' }
#### boolean :RestorePosition ()
{: aria-label='Functions' }

______
### Sabotaging ()
{: aria-label='Functions' }
#### boolean :Sabotaging ()
{: aria-label='Functions' }

______
### SavePosition ()
{: aria-label='Functions' }
#### void :SavePosition ()
{: aria-label='Functions' }

______
### SaveState ()
{: aria-label='Functions' }
#### void :SaveState (integer fileHelper)
{: aria-label='Functions' }

______
### SelectSabotageTarget ()
{: aria-label='Functions' }
#### [Pointf](../Hyperspace/Pointf) :SelectSabotageTarget ()
{: aria-label='Functions' }

______
### SetCloneReady ()
{: aria-label='Functions' }
#### void :SetCloneReady (boolean cloneReady)
{: aria-label='Functions' }

______
### SetCurrentShip ()
{: aria-label='Functions' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Functions' }

______
### SetCurrentSystem ()
{: aria-label='Functions' }
#### void :SetCurrentSystem ([ShipSystem](../Hyperspace/ShipSystem) sys)
{: aria-label='Functions' }

______
### SetCurrentTarget ()
{: aria-label='Functions' }
#### void :SetCurrentTarget ([StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) target, boolean unk)
{: aria-label='Functions' }

______
### SetDamageBoost ()
{: aria-label='Functions' }
#### void :SetDamageBoost (number damageBoost)
{: aria-label='Functions' }

______
### SetDeathNumber ()
{: aria-label='Functions' }
#### void :SetDeathNumber (integer deathNum)
{: aria-label='Functions' }

______
### SetFrozen ()
{: aria-label='Functions' }
#### void :SetFrozen (boolean frozen)
{: aria-label='Functions' }

______
### SetFrozenLocation ()
{: aria-label='Functions' }
#### void :SetFrozenLocation (boolean frozenLocation)
{: aria-label='Functions' }

______
### SetHealthBoost ()
{: aria-label='Functions' }
#### void :SetHealthBoost (integer healthBoost)
{: aria-label='Functions' }

______
### SetMedbay ()
{: aria-label='Functions' }
#### void :SetMedbay (number health)
{: aria-label='Functions' }

______
### SetMindControl ()
{: aria-label='Functions' }
#### void :SetMindControl (boolean controlled)
{: aria-label='Functions' }

______
### SetName ()
{: aria-label='Functions' }
#### void :SetName ([TextString](../Hyperspace/TextString) name, boolean force)
{: aria-label='Functions' }

______
### SetOutOfGame ()
{: aria-label='Functions' }
#### void :SetOutOfGame ()
{: aria-label='Functions' }

______
### SetPath ()
{: aria-label='Functions' }
#### boolean :SetPath (Path path)
{: aria-label='Functions' }

______
### SetPosition ()
{: aria-label='Functions' }
#### void :SetPosition ([Point](../Hyperspace/Point) pos)
{: aria-label='Functions' }

______
### SetResisted ()
{: aria-label='Functions' }
#### void :SetResisted (boolean resisted)
{: aria-label='Functions' }

______
### SetRoom ()
{: aria-label='Functions' }
#### void :SetRoom (integer roomId)
{: aria-label='Functions' }

______
### SetRoomPath ()
{: aria-label='Functions' }
#### void :SetRoomPath (integer slotId, integer roomId)
{: aria-label='Functions' }

______
### SetSavePosition ()
{: aria-label='Functions' }
#### void :SetSavePosition ([Slot](../Hyperspace/Slot) position)
{: aria-label='Functions' }

______
### SetSex ()
{: aria-label='Functions' }
#### void :SetSex (boolean male)
{: aria-label='Functions' }

______
### SetSkillProgress ()
{: aria-label='Functions' }
#### void :SetSkillProgress (integer skillId, integer skillLevel)
{: aria-label='Functions' }

______
### SetTask ()
{: aria-label='Functions' }
#### void :SetTask (CrewTask task)
{: aria-label='Functions' }

______
### ShipDamage ()
{: aria-label='Functions' }
#### boolean :ShipDamage (number damage)
{: aria-label='Functions' }

______
### StartRepair ()
{: aria-label='Functions' }
#### void :StartRepair ([Repairable](../Hyperspace/Repairable) toRepair)
{: aria-label='Functions' }

______
### StartTeleport ()
{: aria-label='Functions' }
#### void :StartTeleport ()
{: aria-label='Functions' }

______
### StartTeleportArrive ()
{: aria-label='Functions' }
#### void :StartTeleportArrive ()
{: aria-label='Functions' }

______
### StopRepairing ()
{: aria-label='Functions' }
#### void :StopRepairing ()
{: aria-label='Functions' }

______
### UpdateHealth ()
{: aria-label='Functions' }
#### void :UpdateHealth ()
{: aria-label='Functions' }

______
### UpdateMovement ()
{: aria-label='Functions' }
#### void :UpdateMovement ()
{: aria-label='Functions' }

______
### UpdateRepair ()
{: aria-label='Functions' }
#### void :UpdateRepair ()
{: aria-label='Functions' }

______
### ValidTarget ()
{: aria-label='Functions' }
#### boolean :ValidTarget (integer unk)
{: aria-label='Functions' }

______
### WithinRect ()
{: aria-label='Functions' }
#### boolean :WithinRect (integer x, integer y, integer w, integer h)
{: aria-label='Functions' }

___


## Fields
### bActiveManning
{: aria-label='Variables' }
#### boolean .bActiveManning
{: aria-label='Variables' }

______
### bCloned
{: aria-label='Variables' }
#### boolean .bCloned
{: aria-label='Variables' }

______
### bDead
{: aria-label='Variables' }
#### boolean .bDead
{: aria-label='Variables' }

______
### bFighting
{: aria-label='Variables' }
#### boolean .bFighting
{: aria-label='Variables' }

______
### bFrozen
{: aria-label='Variables' }
#### boolean .bFrozen
{: aria-label='Variables' }

______
### bFrozenLocation
{: aria-label='Variables' }
#### boolean .bFrozenLocation
{: aria-label='Variables' }

______
### bMindControlled
{: aria-label='Variables' }
#### boolean .bMindControlled
{: aria-label='Variables' }

______
### bOutOfGame
{: aria-label='Variables' }
#### boolean .bOutOfGame
{: aria-label='Variables' }

______
### bResisted
{: aria-label='Variables' }
#### boolean .bResisted
{: aria-label='Variables' }

______
### bSharedSpot
{: aria-label='Variables' }
#### boolean .bSharedSpot
{: aria-label='Variables' }

______
### bSuffocating
{: aria-label='Variables' }
#### boolean .bSuffocating
{: aria-label='Variables' }

______
### blockingDoor
{: aria-label='Variables' }
#### [Door](../Hyperspace/Door) .blockingDoor
{: aria-label='Variables' }

______
### blueprint
{: aria-label='Variables' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) .blueprint
{: aria-label='Variables' }

______
### boardingGoal
{: aria-label='Variables' }
#### BoardingGoal .boardingGoal
{: aria-label='Variables' }

______
### clone_ready
{: aria-label='Variables' }
#### boolean .clone_ready
{: aria-label='Variables' }

______
### crewAnim
{: aria-label='Variables' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) .crewAnim
{: aria-label='Variables' }

______
### crewTarget
{: aria-label='Variables' }
#### [StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) .crewTarget
{: aria-label='Variables' }

______
### currentRepair
{: aria-label='Variables' }
#### [Repairable](../Hyperspace/Repairable) .currentRepair
{: aria-label='Variables' }

______
### currentShipId
{: aria-label='Variables' }
#### integer .currentShipId
{: aria-label='Variables' }

______
### currentSlot
{: aria-label='Variables' }
#### [Slot](../Hyperspace/Slot) .currentSlot
{: aria-label='Variables' }

______
### currentSystem
{: aria-label='Variables' }
#### [ShipSystem](../Hyperspace/ShipSystem) .currentSystem
{: aria-label='Variables' }

______
### currentTarget
{: aria-label='Variables' }
#### [Pointf](../Hyperspace/Pointf) .currentTarget
{: aria-label='Variables' }

______
### extend (Read-only)
{: aria-label='Variables' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .extend
{: aria-label='Variables' }

______
### fCloneDying
{: aria-label='Variables' }
#### number .fCloneDying
{: aria-label='Variables' }

______
### fMedbay
{: aria-label='Variables' }
#### number .fMedbay
{: aria-label='Variables' }

______
### fMindDamageBoost
{: aria-label='Variables' }
#### number .fMindDamageBoost
{: aria-label='Variables' }

______
### fStunTime
{: aria-label='Variables' }
#### number .fStunTime
{: aria-label='Variables' }

______
### finalGoal
{: aria-label='Variables' }
#### [Slot](../Hyperspace/Slot) .finalGoal
{: aria-label='Variables' }

______
### flashHealthTracker
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashHealthTracker
{: aria-label='Variables' }

______
### goal_x
{: aria-label='Variables' }
#### number .goal_x
{: aria-label='Variables' }

______
### goal_y
{: aria-label='Variables' }
#### number .goal_y
{: aria-label='Variables' }

______
### healing
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .healing
{: aria-label='Variables' }

______
### health
{: aria-label='Variables' }
#### pair\<number, number\> .health
{: aria-label='Variables' }

______
### healthBar
{: aria-label='Variables' }
#### CachedRect .healthBar
{: aria-label='Variables' }

______
### healthBoost
{: aria-label='Variables' }
#### integer .healthBoost
{: aria-label='Variables' }

______
### healthBox
{: aria-label='Variables' }
#### CachedImage .healthBox
{: aria-label='Variables' }

______
### healthBoxRed
{: aria-label='Variables' }
#### CachedImage .healthBoxRed
{: aria-label='Variables' }

______
### height
{: aria-label='Variables' }
#### integer .height
{: aria-label='Variables' }

______
### iDeathNumber
{: aria-label='Variables' }
#### integer .iDeathNumber
{: aria-label='Variables' }

______
### iManningId
{: aria-label='Variables' }
#### integer .iManningId
{: aria-label='Variables' }

______
### iOnFire
{: aria-label='Variables' }
#### integer .iOnFire
{: aria-label='Variables' }

______
### iRepairId
{: aria-label='Variables' }
#### integer .iRepairId
{: aria-label='Variables' }

______
### iRoomId
{: aria-label='Variables' }
#### integer .iRoomId
{: aria-label='Variables' }

______
### iShipId
{: aria-label='Variables' }
#### integer .iShipId
{: aria-label='Variables' }

______
### iStackId
{: aria-label='Variables' }
#### integer .iStackId
{: aria-label='Variables' }

______
### intruder
{: aria-label='Variables' }
#### boolean .intruder
{: aria-label='Variables' }

______
### lastDamageTimer
{: aria-label='Variables' }
#### number .lastDamageTimer
{: aria-label='Variables' }

______
### lastHealthChange
{: aria-label='Variables' }
#### number .lastHealthChange
{: aria-label='Variables' }

______
### lastLevelUp
{: aria-label='Variables' }
#### integer .lastLevelUp
{: aria-label='Variables' }

______
### last_door
{: aria-label='Variables' }
#### [Door](../Hyperspace/Door) .last_door
{: aria-label='Variables' }

______
### levelUp
{: aria-label='Variables' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .levelUp
{: aria-label='Variables' }

______
### mindControlled
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .mindControlled
{: aria-label='Variables' }

______
### moveGoal
{: aria-label='Variables' }
#### integer .moveGoal
{: aria-label='Variables' }

______
### movementTarget
{: aria-label='Variables' }
#### CachedImage .movementTarget
{: aria-label='Variables' }

______
### new_path
{: aria-label='Variables' }
#### boolean .new_path
{: aria-label='Variables' }

______
### path
{: aria-label='Variables' }
#### Path .path
{: aria-label='Variables' }

______
### savedPosition
{: aria-label='Variables' }
#### [Slot](../Hyperspace/Slot) .savedPosition
{: aria-label='Variables' }

______
### scale
{: aria-label='Variables' }
#### number .scale
{: aria-label='Variables' }

______
### selectionImage
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .selectionImage
{: aria-label='Variables' }

______
### selectionState
{: aria-label='Variables' }
#### integer .selectionState
{: aria-label='Variables' }

______
### ship
{: aria-label='Variables' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Variables' }

______
### size
{: aria-label='Variables' }
#### number .size
{: aria-label='Variables' }

______
### skillUp
{: aria-label='Variables' }
#### vector\<vector\<[AnimationTracker](../Hyperspace/AnimationTracker)\>\> .skillUp
{: aria-label='Variables' }

______
### skillsEarned
{: aria-label='Variables' }
#### vector\<vector\<boolean\>\> .skillsEarned
{: aria-label='Variables' }

______
### species
{: aria-label='Variables' }
#### string .species
{: aria-label='Variables' }

______
### speed_x
{: aria-label='Variables' }
#### number .speed_x
{: aria-label='Variables' }

______
### speed_y
{: aria-label='Variables' }
#### number .speed_y
{: aria-label='Variables' }

______
### stats
{: aria-label='Variables' }
#### [SCrewStats](../Hyperspace/SCrewStats) .stats
{: aria-label='Variables' }

______
### stunIcon
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .stunIcon
{: aria-label='Variables' }

______
### stunned
{: aria-label='Variables' }
#### [Animation](../Hyperspace/Animation) .stunned
{: aria-label='Variables' }

______
### task
{: aria-label='Variables' }
#### CrewTask .task
{: aria-label='Variables' }

______
### type
{: aria-label='Variables' }
#### string .type
{: aria-label='Variables' }

______
### usingSkill
{: aria-label='Variables' }
#### integer .usingSkill
{: aria-label='Variables' }

______
### width
{: aria-label='Variables' }
#### integer .width
{: aria-label='Variables' }

______
### x (Read-only)
{: aria-label='Variables' }
#### number .x
{: aria-label='Variables' }
**read-only**

______
### x_destination
{: aria-label='Variables' }
#### number .x_destination
{: aria-label='Variables' }

______
### y (Read-only)
{: aria-label='Variables' }
#### number .y
{: aria-label='Variables' }
**read-only**

______
### y_destination
{: aria-label='Variables' }
#### number .y_destination
{: aria-label='Variables' }

___
